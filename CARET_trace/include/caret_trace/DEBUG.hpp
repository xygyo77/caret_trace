#include <execinfo.h>
#include <cstring>
#include <unistd.h>
static void extractc_fn(const char* symbol, char* fn, size_t bufSize) {
    const char* start = strchr(symbol, '(');
    if (start) {
        ++start; // '('を飛ばす
        const char* end = strchr(start, '+');
        if (end) {
            strncpy(fn, start, end - start);
            fn[end - start] = '\0'; // 終端文字を追加
        } else {
            strncpy(fn, start, bufSize - 1);
            fn[bufSize - 1] = '\0';
        }
    } else {
        strncpy(fn, symbol, bufSize - 1);
        fn[bufSize - 1] = '\0';
    }
}

#define DS(X) { \
  void* callstack[2]; \
  int frames = backtrace(callstack, 2); \
  char** symbols = backtrace_symbols(callstack, frames); \
  char fn[512]; \
  extractc_fn(symbols[1], fn, 512); \
  std::cout << getpid() << "/ " << gettid() << ": [" << fn << "->" <<__func__ << "] " << __LINE__ << ": " << X << std::endl; \
  free(symbols); \
}

#define D(X) {std::cout << __func__ << ": " << __LINE__ << " | " << X << std::endl;}

#pragma once // Tránh định nghĩa lại khi include nhiều lần

// * Reset
#define RESET "\033[0m"

// * Định dạng văn bản
#define BOLD "\033[1m"
#define DIM "\033[2m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"
#define BLINK "\033[5m"
#define REVERSE "\033[7m"
#define HIDDEN "\033[8m"
#define STRIKETHROUGH "\033[9m"

// * Màu chữ (Foreground)
#define FG_BLACK "\033[30m"
#define FG_RED "\033[31m"
#define FG_GREEN "\033[32m"
#define FG_YELLOW "\033[33m"
#define FG_BLUE "\033[34m"
#define FG_MAGENTA "\033[35m"
#define FG_CYAN "\033[36m"
#define FG_WHITE "\033[37m"

// * Màu chữ sáng hơn (Foreground bright)
#define FG_BRIGHT_BLACK "\033[90m"
#define FG_BRIGHT_RED "\033[91m"
#define FG_BRIGHT_GREEN "\033[92m"
#define FG_BRIGHT_YELLOW "\033[93m"
#define FG_BRIGHT_BLUE "\033[94m"
#define FG_BRIGHT_MAGENTA "\033[95m"
#define FG_BRIGHT_CYAN "\033[96m"
#define FG_BRIGHT_WHITE "\033[97m"

// * Màu nền (Background)
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

// * Màu nền sáng hơn (Background bright)
#define BG_BRIGHT_BLACK "\033[100m"
#define BG_BRIGHT_RED "\033[101m"
#define BG_BRIGHT_GREEN "\033[102m"
#define BG_BRIGHT_YELLOW "\033[103m"
#define BG_BRIGHT_BLUE "\033[104m"
#define BG_BRIGHT_MAGENTA "\033[105m"
#define BG_BRIGHT_CYAN "\033[106m"
#define BG_BRIGHT_WHITE "\033[107m"

// * Điều khiển con trỏ
#define CURSOR_UP(n) "\033[" #n "A"    // Di chuyển lên n dòng
#define CURSOR_DOWN(n) "\033[" #n "B"  // Di chuyển xuống n dòng
#define CURSOR_RIGHT(n) "\033[" #n "C" // Di chuyển sang phải n cột
#define CURSOR_LEFT(n) "\033[" #n "D"  // Di chuyển sang trái n cột
#define CURSOR_HOME "\033[H"           // Đưa con trỏ về góc trên trái
#define CURSOR_CLEAR_LINE "\033[K"     // Xóa từ con trỏ đến cuối dòng
#define CURSOR_CLEAR_SCREEN "\033[2J"  // Xóa toàn bộ màn hình

// Định nghĩa mặc định
#define DEFAULT_TEXT FG_WHITE BG_BLACK RESET

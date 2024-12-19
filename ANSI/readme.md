# 1. Định dạng văn bản

|  Mã   | Hiệu ứng                      |
| :---: | ----------------------------- |
| **0** | Reset                         |
| **1** | In đậm                        |
| **3** | In nghiêng                    |
| **4** | Gạch chân                     |
| **7** | Đảo ngược màu (invert colors) |
| **9** | Gạch ngang chữ                |

# 2. Màu chữ (Foreground Colors)

| Màu        | Mã   | Mã sáng hơn (Bold) |
| ---------- | ---- | ------------------ |
| Đen        | `30` | `90`               |
| Đỏ         | `31` | `91`               |
| Xanh lá    | `32` | `92`               |
| Vàng       | `33` | `93`               |
| Xanh dương | `34` | `94`               |
| Tím        | `35` | `95`               |
| Xanh lơ    | `36` | `96`               |
| Trắng      | `37` | `97`               |

# 3. Màu nền (Background Colors)

| Màu        | Mã   | Mã sáng hơn |
| ---------- | ---- | ----------- |
| Đen        | `40` | `100`       |
| Đỏ         | `41` | `101`       |
| Xanh lá    | `42` | `102`       |
| Vàng       | `43` | `103`       |
| Xanh dương | `44` | `104`       |
| Tím        | `45` | `105`       |
| Xanh lơ    | `46` | `106`       |
| Trắng      | `47` | `107`       |

# 4. Điều khiển con trỏ

| Mã                  | Chức năng                              |
| ------------------- | -------------------------------------- |
| `ESC[H hoặc ESC[;H` | Di chuyển con trỏ về góc trên bên trái |
| `ESC[nA`            | Di chuyển con trỏ lên n dòng           |
| `ESC[nB`            | Di chuyển con trỏ xuống n dòng         |
| `ESC[nC`            | Di chuyển con trỏ sang phải n cột      |
| `ESC[nD`            | Di chuyển con trỏ sang trái n cột      |
| `ESC[2J`            | Xóa toàn bộ màn hình                   |
| `ESC[K`             | Xóa từ vị trí con trỏ đến cuối dòng    |

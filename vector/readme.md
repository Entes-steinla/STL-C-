# Vector trong C++

## 1. Vector

`vector` là một container thuộc thư viện chuẩn **STL** _(Standard Template Library)_ dùng để lưu trữ các phần tử trong một mảng động có kích thước thay đổi linh hoạt.

`vector` rất hữu ích khi bạn cần làm việc với các mảng mà kích thước không được biết trước hoặc có thể thay đổi trong quá trình thực thi chương trình. Nó tự thay đổi kích thước khi bạn thêm hay xóa các phần tử trong mảng.

Ngoài ra nó hỗ trợ truy cập các phần tử trong mảng thông qua chỉ số như mảng 1 chiều.

Vector có thể lưu các kiểu dữ liệu như `int`, `long long`, `float`, `char`, `pair`, `string`, etc hoặc thậm chí là một vector khác.

Khi sử dụng vector bạn cần thêm thư viện `<vector>` vào chương trình của mình: `#include <vector>`

## 2. Thao tác với Vector

### a. Khởi tạo

```cpp
vector<int> v1;                  // Vector rỗng
vector<int> v2(5);               // Vector có 5 phần tử, giá trị mặc định là 0
vector<int> v3(5, 10);           // Vector có 5 phần tử, mỗi phần tử có giá trị 10
vector<int> v4 = {1, 2, 3, 4};   // Khởi tạo bằng danh sách các phần tử
vector<int> v5(v4);              // Sao chép vector v4
vector<int> v6 = v5;             // Gán vector v6 = v5
```

### b. Thêm phần tử

`push_back(value)` Thêm phần tử vào cuối vector.  
`emplace_back(value)` Tương tự như push_back nhưng hiệu quả hơn trong một số trường hợp.

### c. Xóa phần tử

`pop_back()` Xóa phần tử cuối cùng.  
`erase(iterator)` Xóa phần tử tại vị trí chỉ định.  
`clear()` Xóa tất cả các phần tử.

### d. Truy cập phần tử

`v[i]` Truy cập phần tử tại vị trí `i`.  
`v.at(i)` Tương tự như `v[i]`, nhưng có kiểm tra phạm vi (nếu vượt phạm vi sẽ báo lỗi).  
`front()` Lấy phần tử đầu tiên.  
`back()` Lấy phần tử cuối cùng.

### e. Kích thước

`size()` Số phần tử hiện tại trong vector.  
`capacity() `Dung lượng của vector.  
`resize(n)` Thay đổi kích thước vector.

### f. Duyệt qua các phần tử

```cpp
for (auto i : v) {
    cout << i << " ";
}
```

## 3. Tóm tắt

### Cơ bản

| **Thao tác**                                           | **Cú pháp**                              | **Ví dụ**                                                     |
| ------------------------------------------------------ | ---------------------------------------- | ------------------------------------------------------------- |
| **Khởi tạo**                                           | `vector<int> v;`                         | `vector<int> v(5, 10);`                                       |
| **Thêm phần tử vào cuối**                              | `v.push_back(x);`                        | `v.push_back(5);`                                             |
| **Thêm phần tử hiệu quả**                              | `v.emplace_back(x);`                     | `v.emplace_back(5);`                                          |
| **Xóa phần tử cuối**                                   | `v.pop_back();`                          | `v.pop_back();`                                               |
| **Xóa phần tử tại vị trí**                             | `v.erase(v.begin() + i);`                | `v.erase(v.begin() + 2);`                                     |
| **Xóa một khoảng phần tử**                             | `v.erase(v.begin() + a, v.begin() + b);` | `v.erase(v.begin(), v.begin() + 3);`                          |
| **Xóa tất cả phần tử**                                 | `v.clear();`                             | `v.clear();`                                                  |
| **Truy cập phần tử**                                   | `v[i]` hoặc `v.at(i)`                    | `cout << v[2];`                                               |
| **Phần tử đầu tiên**                                   | `v.front();`                             | `cout << v.front();`                                          |
| **Phần tử cuối cùng**                                  | `v.back();`                              | `cout << v.back();`                                           |
| **Kích thước hiện tại**                                | `v.size();`                              | `cout << v.size();`                                           |
| **Dung lượng (capacity)**                              | `v.capacity();`                          | `cout << v.capacity();`                                       |
| **Dự trữ dung lượng, đặt dung lượng tối thiểu**        | `v.reserve(n);`                          | `v.reserve(20);`                                              |
| **Giảm dung lượng về bằng kích thước**                 | `v.shrink_to_fit();`                     | `v.shrink_to_fit();`                                          |
| **Kiểm tra rỗng**                                      | `v.empty();`                             | `if (v.empty()) cout << "Rỗng";`                              |
| **Thay đổi kích thước, thêm giá trị mặc định nếu cần** | `v.resize(n, x);`                        | `v.resize(10, 0);`                                            |
| **Duyệt qua phần tử**                                  | `for (auto x : v)` hoặc `for_each`       | `for (int i = 0; i < v.size(); i++) cout << v[i];`            |
| **Đảo vector**                                         | `reverse(v.begin(), v.end());`           | `reverse(v.begin(), v.end());`                                |
| **Sắp xếp**                                            | `sort(v.begin(), v.end());`              | `sort(v.begin(), v.end(), greater<int>());`                   |
| **Chèn phần tử tại vị trí chỉ định**                   | `v.insert(v.begin() + i, x);`            | `v.insert(v.begin() + 2, 10);`                                |
| **Chèn nhiều phần tử tại vị trí chỉ định**             | `v.insert(v.begin() + i, n, x);`         | `v.insert(v.begin() + 1, 3, 7);`                              |
| **Truy cập iterator**                                  | `v.begin(), v.end()`                     | `for (auto it = v.begin(); it != v.end(); ++it) cout << *it;` |
| **Sao chép vector**                                    | `vector<int> v2 = v1;`                   | `vector<int> v2 = v1;`                                        |
| **Hoán đổi**                                           | `v1.swap(v2);`                           | `v1.swap(v2);`                                                |
| **So sánh vector (`==`, `!=`, `<`, `>`, ...)**         | `v1 == v2;`                              | `if (v1 == v2) cout << "Bằng nhau";`                          |
| **Di chuyển dữ liệu thay vì sao chép**                 | `std::move(v1);`                         | `vector<int> v2 = std::move(v1);`                             |

### Nâng cao

| **Thao tác**                      | **Mô tả**                                                            | **Cú pháp**                    | **Ví dụ**                                                       |
| --------------------------------- | -------------------------------------------------------------------- | ------------------------------ | --------------------------------------------------------------- |
| **Sử dụng allocator**             | Lấy bộ cấp phát bộ nhớ của vector                                    | `v.get_allocator();`           | `auto alloc = v.get_allocator();`                               |
| **Cập nhật phần tử với iterator** | Gán giá trị mới cho phần tử thông qua iterator                       | `*it = x;`                     | `auto it = v.begin(); *it = 10;`                                |
| **Truy cập vùng dữ liệu thô**     | Lấy con trỏ tới vùng dữ liệu lưu trữ các phần tử                     | `v.data();`                    | `int* ptr = v.data(); cout << ptr[0];`                          |
| **Giới hạn dung lượng lớn nhất**  | Lấy dung lượng tối đa mà vector có thể đạt được                      | `v.max_size();`                | `cout << v.max_size();`                                         |
| **Gán lại giá trị**               | Gán giá trị cho toàn bộ vector                                       | `v.assign(n, x);`              | `v.assign(5, 10);`                                              |
| **Gán từ một dải**                | Gán giá trị từ một dải (iterators)                                   | `v.assign(first, last);`       | `int arr[] = {1, 2, 3}; v.assign(arr, arr + 3);`                |
| **Chèn từ một dải**               | Chèn các phần tử từ một dải (iterators)                              | `v.insert(it, first, last);`   | `int arr[] = {4, 5, 6}; v.insert(v.begin(), arr, arr + 3);`     |
| **Xóa và trả iterator**           | Xóa phần tử và trả iterator tới phần tử kế tiếp                      | `v.erase(it);`                 | `auto it = v.erase(v.begin());`                                 |
| **Cắt vector bằng `resize`**      | Giảm số phần tử vector bằng `resize`                                 | `v.resize(n);`                 | `v.resize(3); // Giữ lại 3 phần tử đầu`                         |
| **Đảo ngược iterator**            | Sử dụng reverse_iterator                                             | `v.rbegin(), v.rend()`         | `for (auto it = v.rbegin(); it != v.rend(); ++it) cout << *it;` |
| **min max**                       | Chúng trả về iterator trỏ tới phần tử nhỏ nhất/lớn nhất trong vector | `min_element` và `max_element` | `auto min_it = std::min_element(v.begin(), v.end());`           |
| **index min max**                 | Tính chỉ số của iterator bằng cách lấy khoảng cách từ v.begin()      | `std::distance`                | `int min_index = std::distance(v.begin(), min_it);`             |

### `std::vector<bool>`

| **Thao tác**             | **Mô tả**                        | **Cú pháp**          | **Ví dụ**                      |
| ------------------------ | -------------------------------- | -------------------- | ------------------------------ |
| **Truy cập bit**         | Truy cập và thay đổi giá trị bit | `v[i] = true;`       | `v[1] = false;`                |
| **Gán giá trị bit**      | Gán giá trị cho vector           | `v.assign(n, true);` | `v.assign(10, false);`         |
| **Kiểm tra giá trị bit** | Kiểm tra giá trị tại vị trí      | `v.at(i)`            | `if (v.at(1)) cout << "True";` |

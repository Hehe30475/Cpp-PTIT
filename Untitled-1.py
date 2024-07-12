def count_digits(a, b):
    # Khởi tạo một mảng để đếm số lần xuất hiện của mỗi chữ số
    count = [0]*10

    # Duyệt qua tất cả các số từ a đến b
    for i in range(a, b+1):
        # Chuyển số thành chuỗi để dễ dàng xử lý các chữ số
        num_str = str(i)
        # Đếm số lần xuất hiện của mỗi chữ số
        for digit in num_str:
            count[int(digit)] += 1

    # In ra số lần xuất hiện của mỗi chữ số
    for i in range(10):
        print(f"Chữ số {i} xuất hiện {count[i]} lần")

# Gọi hàm với a và b của bạn
a = int(input())
b = int(input())
count_digits(a, b)
# Chương trình đọc file input và output, chạy chương trình của bạn và so sánh kết quả.
# Để chạy chương trình của bạn, bạn cần thay đổi đường dẫn tới file input và output của bạn

import os
import subprocess
import sys
import time

# Thư mục chứa file input và output
# Thay đổi đường dẫn tới thư mục chứa file input và output của bạn
PATH = "C:/Users/HP/GiaiThuat/TestCuoiKi/FinalTest copy/DoiTen/"

PATH_INPUT = PATH + "test/input/"
PATH_OUTPUT = PATH + "test/output/"

# Đường dẫn tới file chương trình chấm điểm
PATH_CPP= PATH + "A43855_Doiten.cpp"
# PATH_PY= PATH + "DoiTen.py"

count= 0
for i in range(50):
    input_file = PATH_INPUT + "input%.2d" % i + ".txt"
    output_file = PATH_OUTPUT + "output%.2d" % i + ".txt"

    f = open("output.txt", "w")
    f.write("")
    f.close()

    # if PATH_CPP is None:
    # Chạy file chương trình c++ với input_file làm input và lưu output vào file output.txt
    subprocess.run(["g++", PATH_CPP, "-o", "test"])
    # time.sleep(0.5)
    subprocess.run(["./test"], stdin=open(input_file, "r"), stdout=open("output.txt", "w"))
        # run python file
    # subprocess.run(["python", PATH_PY], stdin=open(input_file, "r"), stdout=open("output.txt", "w"))

    # Đọc file output.txt
    f = open("output.txt", "r")
    output = f.read().strip()
    f.close()

    # Đọc file output đúng
    f = open(output_file, "r")
    output_true = f.read().strip()
    f.close()
    os.remove("output.txt")
    # So sánh output và output_true
    if output == output_true:
        print("Test", i, ": True")
        count+=1
    else:
        print("Test", i, ": False")
        print("Output: ", output)
        print("Output true: ", output_true)
        continue

print("So test dung: ", count)

# Xóa file output.txt
# os.remove("output.txt")
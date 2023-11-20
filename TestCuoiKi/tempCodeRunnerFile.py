# Chạy file chương trình c++ với input_file làm input và lưu output vào file output.txt
    subprocess.run(["g++", PATH_CPP, "-o", "test"])
    # time.sleep(0.5)
    subprocess.run(["./test"], stdin=open(input_file, "r"), stdout=open("output.txt", "w"))
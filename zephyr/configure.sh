
cd ..
python generate_version_file.py
cd zephyr
cmake -B build -DBOARD=mppt_1210_hus .

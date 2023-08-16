# python-c-extension-tutorial
This is a tutorial to learn how to create C extensions for Python

# Commands
After creating the c file, type in the terminal:
```sh
python setup.py build
```
or
```sh
python setup.py install
```
Then:
```sh
cp build/lib.win-amd64-cpython-310/fake_numpy.cp310-win_amd64.pyd ./
```
Finally open a Python interpreter and run:
```py
import fake_numpy
help(fake_numpy)
```

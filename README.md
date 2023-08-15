# python-c-extension-tutorial
This is a tutorial to learn how to create C extensions for Python

# Commands
```sh
python setup.py build
```
or
```sh
python setup.py install
```

```sh
cp build/lib.win-amd64-cpython-310/fake_numpy.cp310-win_amd64.pyd ./
```

```py
import fake_numpy
help(fake_numpy)
```

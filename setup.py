from distutils.core import setup, Extension

module = Extension("fake_numpy", sources=["fake_numpy.c"])

setup(name="fake_numpy",
      version="0.0.1",
      description = "This is a an example on how to create a Python C extension",
      ext_modules = [module]
      )
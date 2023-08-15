#include <Python.h>

int Cadd(int a, int b) {
    return a + b;
};

static PyObject* add(PyObject* self, PyObject* args)
{
    int a, b, r;

    if(!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    r = Cadd(a, b);
    return PyLong_FromLong(r);
};

static PyObject * version(PyObject* self)
{
    return Py_BuildValue("s", "Version 0.0.1");
};

static PyMethodDef fake_numpy_methods[] = {
    {"add", add, METH_VARARGS, "Adds 2 integers"},
    {"version", (PyCFunction)version, METH_NOARGS},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fake_numpy = {
    PyModuleDef_HEAD_INIT,
    "fake_numpy",
    "This is a Numpy clone",
    -1, // global state
    fake_numpy_methods
};

// INITIALIZER FUNCTION 
PyMODINIT_FUNC PyInit_fake_numpy(void)
{
    return PyModule_Create(&fake_numpy);
};
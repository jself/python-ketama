from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

sourcefiles = ['ketama.pyx', 'ketama_lib.c', 'md5.c']
setup(
    cmdclass = {'build_ext': build_ext},
    ext_modules = [Extension("ketama", sourcefiles)]
)

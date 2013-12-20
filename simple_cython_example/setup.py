from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

ext_modules = [Extension("cyarith",
                     ["cyarith.pyx", "arith.cpp"],
                     language='c++',
                     include_dirs=[r'.'],
                     library_dirs=[r'.'],
                     )]

setup(
  name = 'cyarith',
  cmdclass = {'build_ext': build_ext},
  ext_modules = ext_modules
)
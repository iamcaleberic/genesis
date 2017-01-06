#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Genesis], [1.0.0], [iamcaleberic@tuta.io])
AC_CONFIG_SRCDIR([includes/banking.h])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE(Genesis, 1.0.0))

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([sqrt])

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT

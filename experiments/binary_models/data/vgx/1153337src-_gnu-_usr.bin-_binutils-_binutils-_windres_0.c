FUN1 (VAR1 *VAR2, int VAR3)
{
fprintf (VAR2, FUN2(""),
VAR4);
fprintf (VAR2, FUN2(" The options VAR5:\VAR6\
-VAR7 --VAR8=<VAR9>            Name input VAR9\VAR6\
-VAR10 --VAR11=<VAR9>           Name output VAR9\VAR6\
-VAR12 --VAR8-VAR13=<VAR13>   Specify input VAR13\VAR6\
-VAR14 --VAR11-VAR13=<VAR13>  Specify output VAR13\VAR6\
-VAR15 --VAR16=<VAR16>         Specify COFF VAR16\VAR6\
--VAR17=<VAR18>  Program to use to preprocess rc VAR9\VAR6\
-VAR19 --VAR20-VAR21=<VAR21>       Include directory when preprocessing rc VAR9\VAR6\
-VAR22 --VAR23 <VAR24>[=<VAR25>]    Define SYM when preprocessing rc VAR9\VAR6\
-VAR26 --VAR27 <VAR24>          Undefine SYM when preprocessing rc VAR9\VAR6\
-VAR28 --verbose                 VAR29 - tells you what VAR30's VAR31\VAR6\
-VAR32 --VAR33=<VAR25>          Set language when reading rc VAR9\VAR6\
--VAR34-VAR35-file           Use a temporary file instead of popen to read\VAR6\
the preprocessor VAR11\VAR6\
--VAR36-VAR34-VAR35-file        Use popen (default)\VAR6"));
fprintf (VAR2, FUN2("\
--yydebug                 Turn on parser VAR37\VAR6"));
fprintf (VAR2, FUN2("\
-r                           Ignored for compatibility with VAR38\VAR6\
-VAR39 --help                    Print this help VAR40\VAR6\
-VAR41 --version                 Print version VAR42\VAR6"));
fprintf (VAR2, FUN2("\
FORMAT is one of VAR38, VAR43, or VAR44, and is deduced from the file VAR45\VAR6\
extension if not VAR46.  A single file name is an input VAR9.\VAR6\
No VAR8-file is stdin, default VAR38.  No VAR11-file is VAR47, default VAR38.\VAR6"));

FUN3 (VAR4, VAR2);

if (VAR3 == 0)
fprintf (VAR2, FUN2(""), VAR48);

FUN4 (VAR3);
}
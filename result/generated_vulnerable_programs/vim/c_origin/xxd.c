


#if _MSC_VER >= 1400
# define _CRT_SECURE_NO_DEPRECATE
# define _CRT_NONSTDC_NO_DEPRECATE
#endif
#if !defined(CYGWIN) && defined(__CYGWIN__)
# define CYGWIN
#endif

#if (defined(__linux__) && !defined(__ANDROID__)) || defined(__CYGWIN__)
# define _XOPEN_SOURCE 700   
#endif

#include <stdio.h>
#ifdef VAXC
# include <file.h>
#else
# include <fcntl.h>
#endif
#if defined(WIN32) || defined(CYGWIN)
# include <io.h>	
#endif
#ifdef WIN32
# include <windows.h>
#endif
#ifdef UNIX
# include <unistd.h>
#endif
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#if __MWERKS__ && !defined(BEBOX)
# include <unix.h>	
#endif



#if defined(__GNUC__) && defined(__STDC__)
# ifndef __USE_FIXED_PROTOTYPES__
#  define __USE_FIXED_PROTOTYPES__
# endif
#endif

#ifndef __USE_FIXED_PROTOTYPES__

#if defined(sun) && defined(FILE) && !defined(__SVR4) && defined(__STDC__)
#  define __P(a) a

extern int fprintf __P((FILE *, char *, ...));
extern int fputs   __P((char *, FILE *));
extern int _flsbuf __P((unsigned char, FILE *));
extern int _filbuf __P((FILE *));
extern int fflush  __P((FILE *));
extern int fclose  __P((FILE *));
extern int fseek   __P((FILE *, int, int));
extern int rewind  __P((FILE *));

extern void perror __P((char *));
# endif
#endif

char version[] = "xxd 2024-05-10 by Juergen Weigert et al.";
#ifdef WIN32
char osver[] = " (Win32)";
#else
char osver[] = "";
#endif

#if defined(WIN32)
# define BIN_READ(yes)  ((yes) ? "rb" : "rt")
# define BIN_WRITE(yes) ((yes) ? "wb" : "wt")
# define BIN_CREAT(yes) ((yes) ? (O_CREAT|O_BINARY) : O_CREAT)
# define BIN_ASSIGN(fp, yes) setmode(fileno(fp), (yes) ? O_BINARY : O_TEXT)
# define PATH_SEP '\\'
#elif defined(CYGWIN)
# define BIN_READ(yes)  ((yes) ? "rb" : "rt")
# define BIN_WRITE(yes) ((yes) ? "wb" : "w")
# define BIN_CREAT(yes) ((yes) ? (O_CREAT|O_BINARY) : O_CREAT)
# define BIN_ASSIGN(fp, yes) ((yes) ? (void) setmode(fileno(fp), O_BINARY) : (void) (fp))
# define PATH_SEP '/'
#else
# ifdef VMS
#  define BIN_READ(dummy)  "r"
#  define BIN_WRITE(dummy) "w"
#  define BIN_CREAT(dummy) O_CREAT
#  define BIN_ASSIGN(fp, dummy) fp
#  define PATH_SEP ']'
#  define FILE_SEP '.'
# else
#  define BIN_READ(dummy)  "r"
#  define BIN_WRITE(dummy) "w"
#  define BIN_CREAT(dummy) O_CREAT
#  define BIN_ASSIGN(fp, dummy) fp
#  define PATH_SEP '/'
# endif
#endif


#if __MWERKS__
# define OPEN(name, mode, umask) open(name, mode)
#else
# define OPEN(name, mode, umask) open(name, mode, umask)
#endif

#ifdef AMIGA
# define STRNCMP(s1, s2, l) strncmp(s1, s2, (size_t)l)
#else
# define STRNCMP(s1, s2, l) strncmp(s1, s2, l)
#endif

#ifndef __P
# if defined(__STDC__) || defined(WIN32)
#  define __P(a) a
# else
#  define __P(a) ()
# endif
#endif

#define TRY_SEEK	
#define COLS 256	


#define LLEN \
    (39             \
    + 2             \
    + 13 * COLS     \
    + (COLS - 1)    \
    + 2             \
    + 12 * COLS     \
    + 2)           

char hexxa[] = "0123456789abcdef0123456789ABCDEF", *hexx = hexxa;


#define HEX_NORMAL 0
#define HEX_POSTSCRIPT 1
#define HEX_CINCLUDE 2
#define HEX_BITS 3		
#define HEX_LITTLEENDIAN 4

#define CONDITIONAL_CAPITALIZE(c) (capitalize ? toupper((unsigned char)(c)) : (c))

#define COLOR_PROLOGUE \
l[c++] = '\033'; \
l[c++] = '['; \
l[c++] = '1'; \
l[c++] = ';'; \
l[c++] = '3';

#define COLOR_EPILOGUE \
l[c++] = '\033'; \
l[c++] = '['; \
l[c++] = '0'; \
l[c++] = 'm';
#define COLOR_RED '1'
#define COLOR_GREEN '2'
#define COLOR_YELLOW '3'
#define COLOR_BLUE '4'
#define COLOR_WHITE '7'

static char *pname;

  static void
exit_with_usage(void)
{
  fprintf(stderr, "Usage:\n       %s [options] [infile [outfile]]\n", pname);
  fprintf(stderr, "    or\n       %s -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\n", pname);
  fprintf(stderr, "Options:\n");
  fprintf(stderr, "    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n");
  fprintf(stderr, "    -b          binary digit dump (incompatible with -ps,-i). Default hex.\n");
  fprintf(stderr, "    -C          capitalize variable names in C include file style (-i).\n");
  fprintf(stderr, "    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n");
  fprintf(stderr, "    -E          show characters in EBCDIC. Default ASCII.\n");
  fprintf(stderr, "    -e          little-endian dump (incompatible with -ps,-i,-r).\n");
  fprintf(stderr, "    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n");
  fprintf(stderr, "    -h          print this summary.\n");
  fprintf(stderr, "    -i          output in C include file style.\n");
  fprintf(stderr, "    -l len      stop after <len> octets.\n");
  fprintf(stderr, "    -n name     set the variable name used in C include output (-i).\n");
  fprintf(stderr, "    -o off      add <off> to the displayed file position.\n");
  fprintf(stderr, "    -ps         output in postscript plain hexdump style.\n");
  fprintf(stderr, "    -r          reverse operation: convert (or patch) hexdump into binary.\n");
  fprintf(stderr, "    -r -s off   revert with <off> added to file positions found in hexdump.\n");
  fprintf(stderr, "    -d          show offset in decimal instead of hex.\n");
  fprintf(stderr, "    -s %sseek  start at <seek> bytes abs. %sinfile offset.\n",
#ifdef TRY_SEEK
	  "[+][-]", "(or +: rel.) ");
#else
	  "", "");
#endif
  fprintf(stderr, "    -u          use upper case hex letters.\n");
  fprintf(stderr, "    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n"),
  fprintf(stderr, "    -v          show version: \"%s%s\".\n", version, osver);
  exit(1);
}

  static void
perror_exit(int ret)
{
  fprintf(stderr, "%s: ", pname);
  perror(NULL);
  exit(ret);
}

  static void
error_exit(int ret, char *msg)
{
  fprintf(stderr, "%s: %s\n", pname, msg);
  exit(ret);
}

  static int
getc_or_die(FILE *fpi)
{
  int c = getc(fpi);
  if (c == EOF && ferror(fpi))
    perror_exit(2);
  return c;
}

  static void
putc_or_die(int c, FILE *fpo)
{
  if (putc(c, fpo) == EOF)
    perror_exit(3);
}

  static void
fputs_or_die(char *s, FILE *fpo)
{
  if (fputs(s, fpo) == EOF)
    perror_exit(3);
}


#define FPRINTF_OR_DIE(args) if (fprintf args < 0) perror_exit(3)

  static void
fclose_or_die(FILE *fpi, FILE *fpo)
{
  if (fclose(fpo) != 0)
    perror_exit(3);
  if (fclose(fpi) != 0)
    perror_exit(2);
}


  static int
parse_hex_digit(int c)
{
  return (c >= '0' && c <= '9') ? c - '0'
	: (c >= 'a' && c <= 'f') ? c - 'a' + 10
	: (c >= 'A' && c <= 'F') ? c - 'A' + 10
	: -1;
}


  static int
parse_bin_digit(int c)
{
  return (c >= '0' && c <= '1') ? c - '0'
        : -1;
}


  static int
skip_to_eol(FILE *fpi, int c)
{
  while (c != '\n' && c != EOF)
    c = getc_or_die(fpi);
  return c;
}


  static int
huntype(
  FILE *fpi,
  FILE *fpo,
  int cols,
  int hextype,
  int base_off)
{
  int c, ign_garb = 1, n1 = -1, n2 = 0, n3 = 0, p = cols, bt = 0, b = 0, bcnt = 0;
  int have_off = 0, want_off = 0;

  rewind(fpi);

  while ((c = getc(fpi)) != EOF)
    {
      if (c == '\r')	
	continue;

      
      if (hextype == HEX_POSTSCRIPT && (c == ' ' || c == '\n' || c == '\t'))
	continue;

      if (hextype == HEX_NORMAL || hextype == HEX_POSTSCRIPT)
        {
	  n3 = n2;
	  n2 = n1;

	  n1 = parse_hex_digit(c);
	  if (n1 == -1 && ign_garb)
	    continue;
        }
      else 
        {
	  n1 = parse_hex_digit(c);
	  if (n1 == -1 && ign_garb)
	    continue;

          bt = parse_bin_digit(c);
          if (bt != -1)
            {
              b = ((b << 1) | bt);
              ++bcnt;
            }
        }

      ign_garb = 0;

      if ((hextype != HEX_POSTSCRIPT) && (p >= cols))
	{
          if (hextype == HEX_NORMAL)
            {
	      if (n1 < 0)
	        {
	          p = 0;
	          continue;
	        }
	      want_off = (want_off << 4) | n1;
            }
          else 
            {
	      if (n1 < 0)
	        {
	          p = 0;
                  bcnt = 0;
	          continue;
	        }
	      want_off = (want_off << 4) | n1;
            }
          continue;
        }

      if (base_off + want_off != have_off)
	{
	  if (fflush(fpo) != 0)
	    perror_exit(3);
#ifdef TRY_SEEK
	  if (fseek(fpo, base_off + want_off - have_off, SEEK_CUR) >= 0)
	    have_off = base_off + want_off;
#endif
	  if (base_off + want_off < have_off)
	    error_exit(5, "Sorry, cannot seek backwards.");
	  for (; have_off < base_off + want_off; have_off++)
	    putc_or_die(0, fpo);
	}

      if (hextype == HEX_NORMAL || hextype == HEX_POSTSCRIPT)
        {
          if (n2 >= 0 && n1 >= 0)
            {
              putc_or_die((n2 << 4) | n1, fpo);
              have_off++;
              want_off++;
              n1 = -1;
              if (!hextype && (++p >= cols))
              
              c = skip_to_eol(fpi, c);
            }
          else if (n1 < 0 && n2 < 0 && n3 < 0)
            
            c = skip_to_eol(fpi, c);
        }
      else 
        {
          if (bcnt == 8)
            {
              putc_or_die(b, fpo);
              have_off++;
              want_off++;
              b = 0;
              bcnt = 0;
              if (++p >= cols)
                
                 c = skip_to_eol(fpi, c);
            }
        }

      if (c == '\n')
	{
	  if (hextype == HEX_NORMAL || hextype == HEX_BITS)
	    want_off = 0;
	  p = cols;
	  ign_garb = 1;
	}
    }
  if (fflush(fpo) != 0)
    perror_exit(3);
#ifdef TRY_SEEK
  fseek(fpo, 0L, SEEK_END);
#endif
  fclose_or_die(fpi, fpo);
  return 0;
}


  static void
xxdline(FILE *fp, char *l, int nz)
{
  static char z[LLEN+1];
  static int zero_seen = 0;

  if (!nz && zero_seen == 1)
    strcpy(z, l);

  if (nz || !zero_seen++)
    {
      if (nz)
	{
	  if (nz < 0)
	    zero_seen--;
	  if (zero_seen == 2)
	    fputs_or_die(z, fp);
	  if (zero_seen > 2)
	    fputs_or_die("*\n", fp);
	}
      if (nz >= 0 || zero_seen > 0)
	fputs_or_die(l, fp);
      if (nz)
	zero_seen = 0;
    }
}



static unsigned char etoa64[] =
{
    0040,0240,0241,0242,0243,0244,0245,0246,
    0247,0250,0325,0056,0074,0050,0053,0174,
    0046,0251,0252,0253,0254,0255,0256,0257,
    0260,0261,0041,0044,0052,0051,0073,0176,
    0055,0057,0262,0263,0264,0265,0266,0267,
    0270,0271,0313,0054,0045,0137,0076,0077,
    0272,0273,0274,0275,0276,0277,0300,0301,
    0302,0140,0072,0043,0100,0047,0075,0042,
    0303,0141,0142,0143,0144,0145,0146,0147,
    0150,0151,0304,0305,0306,0307,0310,0311,
    0312,0152,0153,0154,0155,0156,0157,0160,
    0161,0162,0136,0314,0315,0316,0317,0320,
    0321,0345,0163,0164,0165,0166,0167,0170,
    0171,0172,0322,0323,0324,0133,0326,0327,
    0330,0331,0332,0333,0334,0335,0336,0337,
    0340,0341,0342,0343,0344,0135,0346,0347,
    0173,0101,0102,0103,0104,0105,0106,0107,
    0110,0111,0350,0351,0352,0353,0354,0355,
    0175,0112,0113,0114,0115,0116,0117,0120,
    0121,0122,0356,0357,0360,0361,0362,0363,
    0134,0237,0123,0124,0125,0126,0127,0130,
    0131,0132,0364,0365,0366,0367,0370,0371,
    0060,0061,0062,0063,0064,0065,0066,0067,
    0070,0071,0372,0373,0374,0375,0376,0377
};

  static void
begin_coloring_char (char *l, int *c, int e, int ebcdic)
{
  if (ebcdic)
    {
      if ((e >= 75 && e <= 80) || (e >= 90 && e <= 97) ||
          (e >= 107 && e <= 111) || (e >= 121 && e <= 127) ||
          (e >= 129 && e <= 137) || (e >= 145 && e <= 154) ||
          (e >= 162 && e <= 169) || (e >= 192 && e <= 201) ||
          (e >= 208 && e <= 217) || (e >= 226 && e <= 233) ||
          (e >= 240 && e <= 249) || (e == 189) || (e == 64) ||
          (e == 173) || (e == 224) )
        l[(*c)++] = COLOR_GREEN;

      else if (e == 37 || e == 13 || e == 5)
        l[(*c)++] = COLOR_YELLOW;
      else if (e == 0)
        l[(*c)++] = COLOR_WHITE;
      else if (e == 255)
        l[(*c)++] = COLOR_BLUE;
      else
        l[(*c)++] = COLOR_RED;
    }
  else  
    {
      #if defined(__MVS__) && __CHARSET_LIB == 0
      if (e >= 64)
        l[(*c)++] = COLOR_GREEN;
      #else
      if (e > 31 && e < 127)
        l[(*c)++] = COLOR_GREEN;
      #endif

      else if (e == 9 || e == 10 || e == 13)
        l[(*c)++] = COLOR_YELLOW;
      else if (e == 0)
        l[(*c)++] = COLOR_WHITE;
      else if (e == 255)
        l[(*c)++] = COLOR_BLUE;
      else
        l[(*c)++] = COLOR_RED;
    }
  l[(*c)++] = 'm';
}

  static int
enable_color(void)
{
#ifdef WIN32
  DWORD   mode;
  HANDLE  out;

  if (!isatty(1))
    return 0;

  out = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleMode(out, &mode);
  mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
  return (int)SetConsoleMode(out, mode);
#elif defined(UNIX)
  return isatty(STDOUT_FILENO);
#else
  return 0;
#endif
}

  int
main(int argc, char *argv[])
{
  FILE *fp, *fpo;
  int c, e, p = 0, relseek = 1, negseek = 0, revert = 0, i, x;
  int cols = 0, colsgiven = 0, nonzero = 0, autoskip = 0, hextype = HEX_NORMAL;
  int capitalize = 0, decimal_offset = 0;
  int ebcdic = 0;
  int octspergrp = -1;	
  int grplen;		
  int length = -1, n = 0, seekoff = 0;
  unsigned int displayoff = 0;
  static char l[LLEN+1];  
  char *pp;
  char *varname = NULL;
  int addrlen = 9;
  int color = 0;
  char *no_color;

  no_color = getenv("NO_COLOR");
  if (no_color == NULL || no_color[0] == '\0')
    color = enable_color();

#ifdef AMIGA
  
  if (argc == 0)
    exit(1);
#endif

  pname = argv[0];
  for (pp = pname; *pp; )
    if (*pp++ == PATH_SEP)
      pname = pp;
#ifdef FILE_SEP
  for (pp = pname; *pp; pp++)
    if (*pp == FILE_SEP)
      {
	*pp = '\0';
	break;
      }
#endif

  while (argc >= 2)
    {
      pp = argv[1] + (!STRNCMP(argv[1], "--", 2) && argv[1][2]);
	   if (!STRNCMP(pp, "-a", 2)) autoskip = 1 - autoskip;
      else if (!STRNCMP(pp, "-b", 2)) hextype = HEX_BITS;
      else if (!STRNCMP(pp, "-e", 2)) hextype = HEX_LITTLEENDIAN;
      else if (!STRNCMP(pp, "-u", 2)) hexx = hexxa + 16;
      else if (!STRNCMP(pp, "-p", 2)) hextype = HEX_POSTSCRIPT;
      else if (!STRNCMP(pp, "-i", 2)) hextype = HEX_CINCLUDE;
      else if (!STRNCMP(pp, "-C", 2)) capitalize = 1;
      else if (!STRNCMP(pp, "-d", 2)) decimal_offset = 1;
      else if (!STRNCMP(pp, "-r", 2)) revert++;
      else if (!STRNCMP(pp, "-E", 2)) ebcdic++;
      else if (!STRNCMP(pp, "-v", 2))
	{
	  fprintf(stderr, "%s%s\n", version, osver);
	  exit(0);
	}
      else if (!STRNCMP(pp, "-c", 2))
	{
	  if (pp[2] && !STRNCMP("apitalize", pp + 2, 9))
	    capitalize = 1;
	  else if (pp[2] && STRNCMP("ols", pp + 2, 3))
	    {
	      colsgiven = 1;
	      cols = (int)strtol(pp + 2, NULL, 0);
	    }
	  else
	    {
	      if (!argv[2])
		exit_with_usage();
	      colsgiven = 1;
	      cols = (int)strtol(argv[2], NULL, 0);
	      argv++;
	      argc--;
	    }
	}
      else if (!STRNCMP(pp, "-g", 2))
	{
	  if (pp[2] && STRNCMP("roup", pp + 2, 4))
	    octspergrp = (int)strtol(pp + 2, NULL, 0);
	  else
	    {
	      if (!argv[2])
		exit_with_usage();
	      octspergrp = (int)strtol(argv[2], NULL, 0);
	      argv++;
	      argc--;
	    }
	}
      else if (!STRNCMP(pp, "-o", 2))
	{
	  int reloffset = 0;
	  int negoffset = 0;
	  if (pp[2] && STRNCMP("ffset", pp + 2, 5))
	    displayoff = strtoul(pp + 2, NULL, 0);
	  else
	    {
	      if (!argv[2])
		exit_with_usage();

	      if (argv[2][0] == '+')
	       reloffset++;
	     if (argv[2][reloffset] == '-')
	       negoffset++;

	     if (negoffset)
	       displayoff = ULONG_MAX - strtoul(argv[2] + reloffset+negoffset, NULL, 0) + 1;
	     else
	       displayoff = strtoul(argv[2] + reloffset+negoffset, NULL, 0);

	      argv++;
	      argc--;
	    }
	}
      else if (!STRNCMP(pp, "-s", 2))
	{
	  relseek = 0;
	  negseek = 0;
	  if (pp[2] && STRNCMP("kip", pp+2, 3) && STRNCMP("eek", pp+2, 3))
	    {
#ifdef TRY_SEEK
	      if (pp[2] == '+')
		relseek++;
	      if (pp[2+relseek] == '-')
		negseek++;
#endif
	      seekoff = strtol(pp + 2+relseek+negseek, (char **)NULL, 0);
	    }
	  else
	    {
	      if (!argv[2])
		exit_with_usage();
#ifdef TRY_SEEK
	      if (argv[2][0] == '+')
		relseek++;
	      if (argv[2][relseek] == '-')
		negseek++;
#endif
	      seekoff = strtol(argv[2] + relseek+negseek, (char **)NULL, 0);
	      argv++;
	      argc--;
	    }
	}
      else if (!STRNCMP(pp, "-l", 2))
	{
	  if (pp[2] && STRNCMP("en", pp + 2, 2))
	    length = strtol(pp + 2, (char **)NULL, 0);
	  else
	    {
	      if (!argv[2])
		exit_with_usage();
	      length = strtol(argv[2], (char **)NULL, 0);
	      argv++;
	      argc--;
	    }
	}
      else if (!STRNCMP(pp, "-n", 2))
        {
          if (pp[2] && STRNCMP("ame", pp + 2, 3))
            varname = pp + 2;
          else
            {
              if (!argv[2])
                exit_with_usage();
              varname = argv[2];
              argv++;
              argc--;
            }
        }
      else if (!STRNCMP(pp, "-R", 2))
        {
	  char *pw = pp + 2;
	  if (!pw[0])
	    {
	      pw = argv[2];
	      argv++;
	      argc--;
	    }
	  if (!pw)
	    exit_with_usage();
	  if (!STRNCMP(pw, "always", 6))
	    {
	      (void)enable_color();
	      color = 1;
	    }
	  else if (!STRNCMP(pw, "never", 5))
	    color = 0;
	  else if (!STRNCMP(pw, "auto", 4))
	    color = enable_color();
	  else
	    exit_with_usage();
        }
      else if (!strcmp(pp, "--"))	
	{
	  argv++;
	  argc--;
	  break;
	}
      else if (pp[0] == '-' && pp[1])	
	exit_with_usage();
      else
	break;				

      argv++;				
      argc--;
    }

  if (!colsgiven || (!cols && hextype != HEX_POSTSCRIPT))
    switch (hextype)
      {
      case HEX_POSTSCRIPT:	cols = 30; break;
      case HEX_CINCLUDE:	cols = 12; break;
      case HEX_BITS:		cols = 6; break;
      case HEX_NORMAL:
      case HEX_LITTLEENDIAN:
      default:			cols = 16; break;
      }

  if (octspergrp < 0)
    switch (hextype)
      {
      case HEX_BITS:		octspergrp = 1; break;
      case HEX_NORMAL:		octspergrp = 2; break;
      case HEX_LITTLEENDIAN:	octspergrp = 4; break;
      case HEX_POSTSCRIPT:
      case HEX_CINCLUDE:
      default:			octspergrp = 0; break;
      }

  if ((hextype == HEX_POSTSCRIPT && cols < 0) ||
      (hextype != HEX_POSTSCRIPT && cols < 1) ||
      ((hextype == HEX_NORMAL || hextype == HEX_BITS || hextype == HEX_LITTLEENDIAN)
							    && (cols > COLS)))
    {
      fprintf(stderr, "%s: invalid number of columns (max. %d).\n", pname, COLS);
      exit(1);
    }

  if (octspergrp < 1 || octspergrp > cols)
    octspergrp = cols;
  else if (hextype == HEX_LITTLEENDIAN && (octspergrp & (octspergrp-1)))
    error_exit(1, "number of octets per group must be a power of 2 with -e.");

  if (argc > 3)
    exit_with_usage();

  if (argc == 1 || (argv[1][0] == '-' && !argv[1][1]))
    BIN_ASSIGN(fp = stdin, !revert);
  else
    {
      if ((fp = fopen(argv[1], BIN_READ(!revert))) == NULL)
	{
	  fprintf(stderr,"%s: ", pname);
	  perror(argv[1]);
	  return 2;
	}
    }

  if (argc < 3 || (argv[2][0] == '-' && !argv[2][1]))
    BIN_ASSIGN(fpo = stdout, revert);
  else
    {
      int fd;
      int mode = revert ? O_WRONLY : (O_TRUNC|O_WRONLY);

      if (((fd = OPEN(argv[2], mode | BIN_CREAT(revert), 0666)) < 0) ||
	  (fpo = fdopen(fd, BIN_WRITE(revert))) == NULL)
	{
	  fprintf(stderr, "%s: ", pname);
	  perror(argv[2]);
	  return 3;
	}
      rewind(fpo);
    }
#ifdef __MVS__
  
  __disableautocvt(fileno(fp));
#endif

  if (revert)
    switch (hextype)
      {
      case HEX_NORMAL:
      case HEX_POSTSCRIPT:
      case HEX_BITS:
        return huntype(fp, fpo, cols, hextype,
          negseek ? -seekoff : seekoff);
        break;
      default:
        error_exit(-1, "Sorry, cannot revert this type of hexdump");
      }

  if (seekoff || negseek || !relseek)
    {
#ifdef TRY_SEEK
      if (relseek)
	e = fseek(fp, negseek ? -seekoff : seekoff, SEEK_CUR);
      else
	e = fseek(fp, negseek ? -seekoff : seekoff,
						negseek ? SEEK_END : SEEK_SET);
      if (e < 0 && negseek)
	error_exit(4, "Sorry, cannot seek.");
      if (e >= 0)
	seekoff = ftell(fp);
      else
#endif
	{
	  int s = seekoff;

	  while (s--)
	    if (getc_or_die(fp) == EOF)
	    {
	      error_exit(4, "Sorry, cannot seek.");
	    }
	}
    }

  if (hextype == HEX_CINCLUDE)
    {
      
      if (varname == NULL && fp != stdin)
        varname = argv[1];

      if (varname != NULL)
	{
	  FPRINTF_OR_DIE((fpo, "unsigned char %s", isdigit((unsigned char)varname[0]) ? "__" : ""));
	  for (e = 0; (c = varname[e]) != 0; e++)
	    putc_or_die(isalnum((unsigned char)c) ? CONDITIONAL_CAPITALIZE(c) : '_', fpo);
	  fputs_or_die("[] = {\n", fpo);
	}

      p = 0;
      while ((length < 0 || p < length) && (c = getc_or_die(fp)) != EOF)
	{
	  FPRINTF_OR_DIE((fpo, (hexx == hexxa) ? "%s0x%02x" : "%s0X%02X",
		(p % cols) ? ", " : (!p ? "  " : ",\n  "), c));
	  p++;
	}

      if (p)
	fputs_or_die("\n", fpo);

      if (varname != NULL)
	{
	  fputs_or_die("};\n", fpo);
	  FPRINTF_OR_DIE((fpo, "unsigned int %s", isdigit((unsigned char)varname[0]) ? "__" : ""));
	  for (e = 0; (c = varname[e]) != 0; e++)
	    putc_or_die(isalnum((unsigned char)c) ? CONDITIONAL_CAPITALIZE(c) : '_', fpo);
	  FPRINTF_OR_DIE((fpo, "_%s = %d;\n", capitalize ? "LEN" : "len", p));
	}

      fclose_or_die(fp, fpo);
      return 0;
    }

  if (hextype == HEX_POSTSCRIPT)
    {
      p = cols;
      while ((length < 0 || n < length) && (e = getc_or_die(fp)) != EOF)
	{
	  putc_or_die(hexx[(e >> 4) & 0xf], fpo);
	  putc_or_die(hexx[e & 0xf], fpo);
	  n++;
	  if (cols > 0 && !--p)
	    {
	      putc_or_die('\n', fpo);
	      p = cols;
	    }
	}
      if (cols == 0 || p < cols)
	putc_or_die('\n', fpo);
      fclose_or_die(fp, fpo);
      return 0;
    }

  

  if (hextype != HEX_BITS)
    {
      grplen = octspergrp + octspergrp + 1;	
      if (color)
        grplen += 11 * octspergrp;  
    }
  else	
    grplen = 8 * octspergrp + 1;

  while ((length < 0 || n < length) && (e = getc_or_die(fp)) != EOF)
    {
      if (p == 0)
	{
	  addrlen = sprintf(l, decimal_offset ? "%08ld:" : "%08lx:",
				  ((unsigned int)(n + seekoff + displayoff)));
	  for (c = addrlen; c < LLEN; l[c++] = ' ')
	    ;
	}
      x = hextype == HEX_LITTLEENDIAN ? p ^ (octspergrp-1) : p;
      c = addrlen + 1 + (grplen * x) / octspergrp;
      if (hextype == HEX_NORMAL || hextype == HEX_LITTLEENDIAN)
	{
          if (color)
            {
	      COLOR_PROLOGUE
	      begin_coloring_char(l,&c,e,ebcdic);
	      l[c++] = hexx[(e >> 4) & 0xf];
	      l[c++] = hexx[e & 0xf];
	      COLOR_EPILOGUE
	    }
          else 
	    {
	      l[c]   = hexx[(e >> 4) & 0xf];
	      l[++c] = hexx[e & 0xf];
	    }
	}
      else 
	{
	  for (i = 7; i >= 0; i--)
	    l[c++] = (e & (1 << i)) ? '1' : '0';
	}
      if (e)
	nonzero++;
      
      if (hextype == HEX_LITTLEENDIAN)
	
	c = grplen * ((cols + octspergrp - 1) / octspergrp);
      else
	c = (grplen * cols - 1) / octspergrp;

      if (color)
        {
          if (hextype == HEX_BITS)
            c += addrlen + 3 + p*12;
          else
            c = addrlen + 3 + (grplen * cols - 1)/octspergrp + p*12;

          if (hextype == HEX_LITTLEENDIAN)
            c += 1;

          COLOR_PROLOGUE
          begin_coloring_char(l,&c,e,ebcdic);
#if defined(__MVS__) && __CHARSET_LIB == 0
          if (e >= 64)
            l[c++] = e;
          else
            l[c++] = '.';
#else
          if (ebcdic)
            e = (e < 64) ? '.' : etoa64[e-64];
          l[c++] = (e > 31 && e < 127) ? e : '.';
#endif
          COLOR_EPILOGUE
          n++;
          if (++p == cols)
            {
              l[c++] = '\n';
              l[c++] = '\0';
              xxdline(fpo, l, autoskip ? nonzero : 1);
              nonzero = 0;
              p = 0;
            }
        }
      else 
        {
          if (ebcdic)
            e = (e < 64) ? '.' : etoa64[e-64];

          c += addrlen + 3 + p;
          l[c++] =
#if defined(__MVS__) && __CHARSET_LIB == 0
              (e >= 64)
#else
              (e > 31 && e < 127)
#endif
              ? e : '.';
          n++;
          if (++p == cols)
            {
              l[c++] = '\n';
              l[c] = '\0';
              xxdline(fpo, l, autoskip ? nonzero : 1);
              nonzero = 0;
              p = 0;
            }
        }
    }
  if (p)
    {
      l[c++] = '\n';
      l[c] = '\0';
      if (color)
        {
          c++;

          x = p;
          if (hextype == HEX_LITTLEENDIAN)
            {
              int fill = octspergrp - (p % octspergrp);
              if (fill == octspergrp) fill = 0;

              c = addrlen + 1 + (grplen * (x - (octspergrp-fill))) / octspergrp;

              for (i = 0; i < fill;i++)
                {
                  COLOR_PROLOGUE
                  l[c++] = COLOR_RED;
                  l[c++] = 'm';
                  l[c++] = ' '; 
                  COLOR_EPILOGUE
                  x++;
                  p++;
                }
            }

          if (hextype != HEX_BITS)
            {
              c = addrlen + 1 + (grplen * x) / octspergrp;
              c += cols - p;
              c += (cols - p) / octspergrp;

              for (i = cols - p; i > 0;i--)
                {
                  COLOR_PROLOGUE
                  l[c++] = COLOR_RED;
                  l[c++] = 'm';
                  l[c++] = ' '; 
                  COLOR_EPILOGUE
                }
            }
        }
      xxdline(fpo, l, 1);
    }
  else if (autoskip)
    xxdline(fpo, l, -1);	

  fclose_or_die(fp, fpo);
  return 0;
}



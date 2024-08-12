static void
FUN1(void *VAR1)
{
uint8_t VAR2[64];
uint8_t VAR3[64];

uint64_t VAR4;
uint32_t VAR5, VAR6;
uint64_t VAR7 = 0; 

int VAR8, VAR9;

size_t VAR10 = 64;

(void)VAR1;

memset(VAR2,0,64);
memset(VAR3,0,64);


VAR4 = 16;
VAR5 = 1;
VAR6 = 1;

VAR8 =
FUN2((const VAR11 *)"", 0, (const VAR11 *)"", 0,
VAR4, VAR5, VAR6, VAR2, VAR10);
VAR9 =
FUN3((const char *)"", 0, (const unsigned char *)"", 0,
VAR4, VAR5, VAR6, VAR7, VAR3, VAR10);

FUN4(VAR8, VAR12, 0);
FUN4(VAR9, VAR12, 1);

FUN5(VAR2, VAR12, VAR3, 64);

memset(VAR2,0,64);
memset(VAR3,0,64);

VAR4 = 1024;
VAR5 = 8;
VAR6 = 16;

VAR8 =
FUN2((const VAR11 *)"", strlen(""),
(const VAR11 *)"", strlen(""),
VAR4, VAR5, VAR6, VAR2, VAR10);
VAR9 =
FUN3((const char *)"", strlen(""),
(const unsigned char *)"", strlen(""),
VAR4, VAR5, VAR6, VAR7, VAR3, VAR10);

FUN4(VAR8, VAR12, 0);
FUN4(VAR9, VAR12, 1);

FUN5(VAR2, VAR12, VAR3, 64);

memset(VAR2,0,64);
memset(VAR3,0,64);

VAR4 = 16384;
VAR5 = 8;
VAR6 = 1;

VAR8 =
FUN2((const VAR11 *)"",
strlen(""),
(const VAR11 *)"",
strlen(""),
VAR4, VAR5, VAR6, VAR2, VAR10);
VAR9 =
FUN3((const char *)"",
strlen(""),
(const unsigned char *)"",
strlen(""),
VAR4, VAR5, VAR6, VAR7, VAR3, VAR10);

FUN4(VAR8, VAR12, 0);
FUN4(VAR9, VAR12, 1);

FUN5(VAR2, VAR12, VAR3, 64);

memset(VAR2,0,64);
memset(VAR3,0,64);

VAR4 = 1048576;
VAR7 = 2 * 1024 * 1024 * (VAR13)1024; 

VAR8 =
FUN2((const VAR11 *)"",
strlen(""),
(const VAR11 *)"",
strlen(""),
VAR4, VAR5, VAR6, VAR2, VAR10);
VAR9 =
FUN3((const char *)"",
strlen(""),
(const unsigned char *)"",
strlen(""),
VAR4, VAR5, VAR6, VAR7, VAR3, VAR10);

FUN4(VAR8, VAR12, 0);
FUN4(VAR9, VAR12, 1);

FUN5(VAR2, VAR12, VAR3, 64);

VAR14:
return;
}
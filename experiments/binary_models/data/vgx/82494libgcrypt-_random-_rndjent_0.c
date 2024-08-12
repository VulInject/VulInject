FUN1 (void (*VAR1)(const void*, VAR2, enum VAR3),
enum random_origins VAR4, size_t VAR5)
{
size_t VAR6 = 0;

if ( FUN2 () )
{
FUN3 ();

if (!VAR7)
{

VAR7 = 1;
FUN4 (VAR8);
VAR8 = NULL;
if ( !(FUN5 () & VAR9))
{
if (!FUN6 ())
VAR8 = FUN7 (1, 0);
}
}

if (VAR8 && VAR1)
{

char VAR10[32];

while (VAR5)
{
int VAR11;
size_t VAR12 = VAR5 < sizeof(VAR10)? VAR5 : sizeof (VAR10);

VAR13++;
VAR11 = FUN8 (VAR8, VAR10, VAR12);
if (VAR11 < 0)
break;

FUN9 (VAR14, VAR10, VAR10, VAR11);
VAR12 = VAR11 < 32? VAR11 : 32;
(*VAR1) (VAR10, VAR12, VAR4);
VAR5 -= VAR12;
VAR6 += VAR12;
VAR15 += VAR12;
}
FUN10 (VAR10, sizeof VAR10);
}

FUN11 ();
}


(void)VAR1;
(void)VAR4;


return VAR6;
}
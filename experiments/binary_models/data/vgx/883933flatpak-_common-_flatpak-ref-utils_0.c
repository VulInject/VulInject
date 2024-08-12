FUN1 (const char *VAR1, const char *VAR2)
{
int VAR3;
int VAR4;


for (VAR4 = 0; VAR4 < 3; VAR4++)
{
VAR1 = FUN2 (VAR1);
VAR2 = FUN2 (VAR2);

VAR3 = FUN3 (VAR1, VAR2);
if (VAR3 != 0)
return VAR3;
}
return 0;
}

struct VAR5 {
int VAR6;
guint16 VAR7;
guint16 VAR8;
guint16 VAR9;
guint16 VAR10;
char *VAR11;


char *VAR12;
};
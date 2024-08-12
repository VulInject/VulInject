static int
FUN1(const void *VAR1, const void *VAR2)
{
int VAR3 = *(int *)VAR1;
int VAR4 = *(int *)VAR2;

if (VAR3 > VAR4)
return (1);
if (VAR4 > VAR3)
return (-1);
return (0);
}

typedef struct VAR5 {
const char	*VAR6;
uint_t		VAR7;
} VAR8;

static optvect_t VAR9[] = {
{ "", VAR10 },
{ "", VAR11 },
{ "", VAR12 },
{ "", VAR13 },
{ NULL }
};
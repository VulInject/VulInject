struct VAR1	*FUN1(void);

enum VAR2 {
VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15,
VAR16, VAR17, VAR18, VAR19, VAR20
};

struct VAR1 {
enum {
VAR21,
VAR22
} VAR23;

union {
char	       *VAR24;
int64_t		VAR25;
} VAR26;
};

enum token	VAR2;
struct VAR1     *VAR27;
char	      **VAR28;

struct VAR1 *
FUN2(int64_t VAR25)
{
struct VAR1     *VAR29;

VAR29 = malloc(sizeof(*VAR29));
if (VAR29 == NULL) {
FUN3(3, NULL);
}
VAR29->VAR23 = VAR21;
VAR29->VAR26.VAR25 = VAR25;
return VAR29;
}
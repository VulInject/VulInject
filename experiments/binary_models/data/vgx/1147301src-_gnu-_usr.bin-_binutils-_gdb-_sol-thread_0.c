static FUN1 (*VAR1)(const VAR2 *VAR3,
const VAR4 *VAR5);
static FUN1 (*VAR6)(const VAR2 *VAR3,
const caddr_t VAR7);
static FUN1 (*VAR8)(const VAR9 *VAR10,
thread_t VAR11,
VAR2 *VAR3);
static FUN1 (*VAR12)(const VAR9 *VAR10,
lwpid_t VAR13,
VAR2 *VAR3);
static FUN1 (*VAR14)(const VAR2 *VAR3,
prgregset_t VAR15);
static FUN1 (*VAR16)(const VAR2 *VAR3,
const prgregset_t VAR15);




static char *
FUN2 (td_err_e VAR17)
{
static struct string_map VAR18[] =
{
{ VAR19, ""call VAR20\"" },
{ VAR21, "" },
{ VAR22, "" },
{ VAR23, "" },
{ VAR24, "" },
{ VAR25, "" },
{ VAR26, "" },
{ VAR27, "" },
{ VAR28, "" },
{ VAR29, "" },
{ VAR30, "" },
{ VAR31, "" },
{ VAR32, "" },
{ VAR33, "" },
{ VAR34, "" },
{ VAR35, "" },
{ VAR36, "" },
{ VAR37, "" },
{ VAR38, "" },
{ VAR39, "" },
{ VAR40, "" }
};
const int VAR41 = sizeof VAR18 / sizeof (struct VAR42);
int VAR43;
static char VAR44[50];

for (VAR43 = 0; VAR43 < VAR41; VAR43++)
if (VAR18[VAR43].VAR45 == VAR17)
return VAR18[VAR43].VAR46;

sprintf (VAR44, "", VAR17);

return VAR44;
}
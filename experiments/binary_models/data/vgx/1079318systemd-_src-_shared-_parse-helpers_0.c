typedef int (*VAR1)(
const char *,
int *,
int *,
VAR2 *,
VAR2 *);

int FUN1(
const char *VAR3,
int *VAR4,
int *VAR5,
VAR2 *VAR6,
VAR2 *VAR7) {


const parse_token_f VAR8[] = {
&VAR9,
&VAR10,
&VAR11,
};
parse_token_f const *VAR12 = VAR8;
int VAR13 = VAR14, VAR15 = 0, VAR16;
uint16_t VAR17 = 0, VAR18 = 0;
const char *VAR19 = FUN2(VAR3);

assert(VAR4);
assert(VAR5);
assert(VAR6);
assert(VAR7);

if (FUN3(VAR19))
return -VAR20;

for (;;) {
_cleanup_free_ char *VAR21 = NULL;

VAR16 = FUN4(&VAR19, &VAR21, "", VAR22);
if (VAR16 == 0)
break;
if (VAR16 < 0)
return VAR16;

if (FUN3(VAR21))
return -VAR20;

while (VAR12 != VAR8 + FUN5(VAR8)) {
VAR16 = (*VAR12)(VAR21, &VAR13, &VAR15, &VAR17, &VAR18);
if (VAR16 == -VAR23)
return VAR16;

++VAR12;

if (VAR16 >= 0)
break;
}
if (VAR12 == VAR8 + FUN5(VAR8))
break;
}


if (VAR16 < 0)
return VAR16;


if (VAR19)
return -VAR20;

*VAR4 = VAR13;
*VAR5 = VAR15;
*VAR6 = VAR17;
*VAR7 = VAR18;
return 0;
}
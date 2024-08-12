void
FUN1(void)
{
static hf_register_info VAR1[] = {
{ &VAR2, {
"", "", VAR3, VAR4,
NULL, 0x0, NULL, VAR5 }},
{ &VAR6, {
"", "", VAR7, VAR8 | VAR9,
&VAR10, 0x0, "", VAR5 }},
{ &VAR11, {
"", "", VAR12, VAR13,
NULL, 0x0, NULL, VAR5 }},
{ &VAR14, {
"", "", VAR7, VAR8,
NULL, 0x0, "", VAR5 }},
{ &VAR15, {
"", "", VAR16, VAR13,
NULL, 0x0, "", VAR5 }},
{ &VAR17, {
"", "", VAR12, VAR13,
NULL, 0x0, "", VAR5 }}
};

static VAR18 *VAR19[] = {
&VAR20
};

VAR21 = FUN2(
"", "", "");

FUN3(VAR21, VAR1,
FUN4(VAR1));

FUN5(VAR19, FUN4(VAR19));
}
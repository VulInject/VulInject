void FUN1(void) {


static hf_register_info VAR1[] = {
{ &VAR2, {
"", "", VAR3, VAR4,
NULL, 0, "", VAR5 }},
{ &VAR6, {
"", "", VAR3, VAR4,
FUN2(VAR7), 0, NULL, VAR5 }},
{ &VAR8, {
"", "", VAR9, VAR4,
NULL, 0, "", VAR5 }},
{ &VAR10,
{ "", "",
VAR11, VAR12, NULL, 0,
"", VAR5 }},

};


static VAR13 *VAR14[] = {
&VAR15,
};


VAR16 = FUN3(VAR17, VAR18, VAR19);


FUN4(VAR16, VAR1, FUN5(VAR1));
FUN6(VAR14, FUN5(VAR14));

}
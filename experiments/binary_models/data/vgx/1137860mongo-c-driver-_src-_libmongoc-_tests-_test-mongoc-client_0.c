FUN1 (void)
{
VAR1 *VAR2;
VAR3 *VAR4;
VAR5 *VAR6;
VAR7 *VAR8;
bson_error_t VAR9;
mongoc_server_description_t const *VAR10;
int VAR11;
mongoc_rpc_t VAR12;
mongoc_buffer_t VAR13;
VAR14 *VAR15;
mc_shared_tpld VAR16;

VAR2 = FUN2 (VAR17);
FUN3 (VAR2);
VAR4 =
FUN4 (FUN5 (VAR2), NULL);

VAR6 = FUN6 (VAR4,
"",
FUN7 (""),
NULL ,
NULL ,
&VAR9);
VAR8 = FUN8 (VAR2);
FUN9 (VAR8);
FUN10 (VAR6);
FUN11 (VAR6);


VAR10 = FUN12 (
FUN13 (VAR4->VAR18), 1, &VAR9);
FUN14 (VAR10, VAR9);
VAR11 = FUN15 (VAR10, &VAR19);
FUN16 (VAR10->VAR20 == VAR21);
FUN17 (VAR2);


FUN18 (&VAR13,
NULL ,
0 ,
NULL ,
NULL );
memset (&VAR12, 0, sizeof (VAR22));
VAR15 = FUN19 (
&VAR4->VAR23, 1, false, NULL, NULL, &VAR9);
FUN14 (VAR15, VAR9);
FUN16 (!FUN20 (VAR4, &VAR12, &VAR13, VAR15, &VAR9));

VAR16 = FUN21 (VAR4->VAR18);
VAR10 = FUN12 (VAR16.VAR24, 1, &VAR9);
FUN14 (VAR10, VAR9);
FUN22 (
FUN15 (VAR10, &VAR19), ==, VAR11 + 1);
FUN16 (VAR10->VAR20 == VAR25);

FUN23 (VAR4);
FUN24 (&VAR13);
FUN25 (VAR15);
FUN26 (&VAR16);
}
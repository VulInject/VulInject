FUN1 (struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = NULL;
struct VAR1 *VAR5 = NULL;
u_int16_t VAR6 = 0;


VAR6 = FUN2 (VAR2->VAR7);   


VAR5 = (struct VAR1 *)
FUN3 (VAR8, VAR6);


memcpy (VAR5, VAR2, VAR6);



VAR4 = (struct VAR3 *)
FUN4 (VAR8, sizeof (struct VAR3));

VAR4->VAR2 = (struct VAR1 *) VAR5;


FUN5 (VAR4, VAR4->VAR9, sizeof (VAR4->VAR9));


FUN6 (VAR4);

return VAR4;
}
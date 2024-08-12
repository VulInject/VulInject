FUN1 (ddg_node_ptr VAR1, sbitmap VAR2, sbitmap VAR3)
{
ddg_edge_ptr VAR4;
int VAR5 = 0;

for (VAR4 = VAR1->VAR6; VAR4; VAR4 = VAR4->VAR7)
{
ddg_node_ptr VAR8 = VAR4->VAR9;
int VAR10 = VAR8->VAR11;

if (FUN2 (VAR2, VAR10)
&& (VAR4->VAR12 == 0)
&& (VAR8->VAR13.VAR14 < VAR1->VAR13.VAR14 + VAR4->VAR15))
{
VAR8->VAR13.VAR14 = VAR1->VAR13.VAR14 + VAR4->VAR15;
FUN3 (VAR3, VAR10);
VAR5 = 1;
}
}
return VAR5;
}
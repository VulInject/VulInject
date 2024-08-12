static int FUN1(struct socket *VAR1, unsigned int VAR2, unsigned long VAR3)
{
void VAR4 *VAR5 = (void VAR4 *) VAR3;
struct hidp_connadd_req VAR6;
struct hidp_conndel_req VAR7;
struct hidp_connlist_req VAR8;
struct hidp_conninfo VAR9;
struct socket *VAR10;
struct socket *VAR11;
int VAR12;

FUN2("", VAR2, VAR3);

switch (VAR2) {
case VAR13:
if (!FUN3(VAR14))
return -VAR15;

if (FUN4(&VAR6, VAR5, sizeof(VAR6)))
return -VAR16;

VAR10 = FUN5(VAR6.VAR17, &VAR12);
if (!VAR10)
return VAR12;

VAR11 = FUN5(VAR6.VAR18, &VAR12);
if (!VAR11) {
FUN6(VAR10);
return VAR12;
}

VAR12 = FUN7(&VAR6, VAR10, VAR11);
if (!VAR12 && FUN8(VAR5, &VAR6, sizeof(VAR6)))
VAR12 = -VAR16;

FUN6(VAR10);
FUN6(VAR11);

return VAR12;

case VAR19:
if (!FUN3(VAR14))
return -VAR15;

if (FUN4(&VAR7, VAR5, sizeof(VAR7)))
return -VAR16;

return FUN9(&VAR7);

case VAR20:
if (FUN4(&VAR8, VAR5, sizeof(VAR8)))
return -VAR16;

if (VAR8.VAR21 <= 0)
return -VAR22;

VAR12 = FUN10(&VAR8);
if (!VAR12 && FUN8(VAR5, &VAR8, sizeof(VAR8)))
return -VAR16;

return VAR12;

case VAR23:
if (FUN4(&VAR9, VAR5, sizeof(VAR9)))
return -VAR16;

VAR12 = FUN11(&VAR9);
if (!VAR12 && FUN8(VAR5, &VAR9, sizeof(VAR9)))
return -VAR16;

return VAR12;
}

return -VAR22;
}
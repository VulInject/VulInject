static int FUN1(struct VAR1 *VAR2,
void *VAR3,
size_t VAR4,
int VAR5,
VAR6 *VAR7
)
{
int VAR8;
dma_addr_t VAR9;
struct VAR10 *this;

this = FUN2(sizeof(*this), VAR11);
if (!this)
return -VAR12;

VAR8 = FUN3(VAR5);

VAR9 = FUN4(VAR2->VAR13, VAR3, VAR4, VAR8);

if (FUN5(VAR2->VAR13, VAR9)) {
FUN6(this);
return -VAR14;
}

this->VAR15 = VAR2->VAR13;
this->VAR16 = VAR9;
this->VAR4 = VAR4;
this->VAR5 = VAR8;

*VAR7 = VAR9;

return FUN7(VAR2->VAR17, VAR18, this);
}
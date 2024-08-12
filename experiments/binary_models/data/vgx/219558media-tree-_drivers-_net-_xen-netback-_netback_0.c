static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned int VAR5,
struct VAR3 *VAR6,
int VAR7)
{
RING_IDX VAR8 = VAR2->VAR9.VAR10;
int VAR11 = 0;
int VAR12 = 0;
int VAR13;

if (!(VAR4->VAR14 & VAR15))
return 0;

do {
struct xen_netif_tx_request VAR16 = { 0 };

if (VAR11 >= VAR7) {
FUN2(VAR2->VAR17->VAR18,
"",
VAR7);
FUN3(VAR2->VAR17);
return -VAR19;
}


if (FUN4(VAR11 >= VAR20)) {
FUN2(VAR2->VAR17->VAR18,
"",
VAR11, VAR20);
FUN3(VAR2->VAR17);
return -VAR21;
}


if (!VAR12 && VAR11 >= VAR22) {
if (FUN5())
FUN6(VAR2->VAR17->VAR18,
"",
VAR11, VAR22);
VAR12 = -VAR21;
}

if (VAR12)
VAR6 = &VAR16;

FUN7(&VAR2->VAR9, VAR8 + VAR11, VAR6);


if (!VAR12 && VAR6->VAR23 > VAR4->VAR23) {
if (FUN5())
FUN6(VAR2->VAR17->VAR18,
"",
VAR6->VAR23, VAR4->VAR23);
VAR12 = -VAR24;
}

VAR4->VAR23 -= VAR6->VAR23;
VAR11++;

if (FUN4((VAR6->VAR25 + VAR6->VAR23) > VAR26)) {
FUN2(VAR2->VAR17->VAR18, "",
VAR6->VAR25, VAR6->VAR23);
FUN3(VAR2->VAR17);
return -VAR27;
}

VAR13 = VAR6->VAR14 & VAR15;

if (!VAR12)
VAR6++;

} while (VAR13);

if (VAR12) {
FUN8(VAR2, VAR4, VAR5, VAR8 + VAR11);
return VAR12;
}

return VAR11;
}
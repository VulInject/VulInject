void FUN1(struct VAR1 *VAR1)
{
int VAR2;

for (VAR2 = 0; VAR2 < VAR3; VAR2++)
VAR1->FUN2(VAR1->VAR4,
VAR5, VAR1, VAR6);
}

static const struct net_device_ops VAR7 = {
.VAR8			= VAR9,
.VAR10			= VAR11,
.VAR12			= VAR13,
.VAR14			= VAR15,
.VAR16			= VAR17,
};

static u8 VAR18[VAR19] = {0x00, 0x0a, 0x3b, 0x00, 0x00, 0x00};

static void FUN3(VAR20 *VAR21, VAR20 *VAR22, VAR20 *VAR23,
VAR20 *VAR24, u8 VAR25)
{

if (!VAR24)
FUN4(VAR21, VAR18);
else
FUN4(VAR21, VAR24);


VAR21[VAR19 - 1] += VAR25;


FUN5(VAR22);
memcpy(VAR22, VAR21, 3);


FUN4(VAR23, VAR21);
}
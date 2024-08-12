static int FUN1(struct VAR1 *VAR2, struct VAR3 **VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
u8 VAR7;
int VAR8 = 4 * VAR6->VAR9;
struct VAR10 *VAR11 = FUN2(VAR6->VAR12->VAR13);
int VAR14  = FUN3(VAR2, VAR4);
if (VAR14 == 0) {
FUN4(VAR11, 0x43, &VAR7);

VAR7 &= (0x0F << VAR8);
VAR7 |= (FUN5(&VAR2->VAR15[0]) +
(FUN5(&VAR2->VAR15[0]) << 2)) << VAR8;
FUN6(VAR11, 0x43, VAR7);
}
return VAR14;
}

static struct scsi_host_template VAR16 = {
FUN7(VAR17),
};

static struct ata_port_operations VAR18 = {
.VAR19	= &VAR20,
.VAR21	= VAR22,
.VAR23	= VAR24,
.VAR25	= VAR26,
.VAR27	= VAR28,
.VAR29	= VAR30,
};

static struct ata_port_operations VAR31 = {
.VAR19	= &VAR18,
.VAR23	= VAR32,
.VAR25	= VAR33,
};



static int FUN8(struct VAR10 *VAR11)
{
u8 VAR7;
int VAR34 = 0;
int VAR35 = 0x22;
struct VAR10 *VAR36;


VAR36 = FUN9(0x1045, 0xC701, NULL);
if (VAR36 == NULL)
return 0;


FUN4(VAR36, 0x08, &VAR7);
if (VAR7 < 0x10)
goto VAR37;

FUN4(VAR36, 0x5F, &VAR7);
VAR35 |= (VAR7 << 8);
FUN10(0x10, VAR35);

if ((FUN11(VAR35 + 2) & 1) == 0)
goto VAR38;


FUN4(VAR11, 0x42, &VAR7);
if ((VAR7 & 0x36) != 0x36)
goto VAR38;
FUN4(VAR36, 0x52, &VAR7);
if (VAR7 & 0x80)	
VAR34 = 1;
VAR38:
FUN12(VAR39 "");
VAR37:		
FUN13(VAR36);
return VAR34;
}
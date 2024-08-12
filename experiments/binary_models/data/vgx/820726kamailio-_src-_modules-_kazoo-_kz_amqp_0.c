int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, struct VAR1 *VAR4)
{
struct timeval VAR5;
VAR5.VAR6 = VAR2->VAR6 - VAR3->VAR6;
VAR5.VAR7 = VAR2->VAR7 - VAR3->VAR7;
if(VAR5.VAR7 >= VAR4->VAR7)
if(VAR5.VAR6 >= VAR4->VAR6)
return 1;
return 0;
}

int VAR8 = 0;

void FUN2(char* VAR9, char* VAR10, char* VAR11, amqp_channel_t VAR12, uint64_t VAR13, int VAR14)
{
kz_amqp_consumer_delivery_ptr VAR15 = (VAR16) FUN3(sizeof(VAR17));
if(VAR15 == NULL) {
VAR18;
return;
}
memset(VAR15, 0, sizeof(VAR17));
VAR15->VAR12 = VAR12;
VAR15->VAR13 = VAR13;
VAR15->VAR9 = VAR9;
VAR15->VAR10 = VAR10;
VAR15->VAR11 = VAR11;
if (write(VAR19[VAR8], &VAR15, sizeof(VAR15)) != sizeof(VAR15)) {
FUN4("", VAR8, strerror(VAR20), VAR9);
}

if(VAR14) {
VAR8++;
if(VAR8 >= VAR21) {
VAR8 = 0;
}
}
}
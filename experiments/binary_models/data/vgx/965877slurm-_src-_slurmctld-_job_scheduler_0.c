static void FUN1(List VAR1, VAR2 *VAR3,
VAR4 *VAR5, uint32_t VAR6)
{
job_queue_req_t VAR7 = { .VAR3 = VAR3,
.VAR1 = VAR1,
.VAR5 = VAR5,
.VAR6 = VAR6 };


if (VAR3->VAR8) {
FUN2(VAR3->VAR8, VAR9,
&VAR7);
return;
}

FUN3(&VAR7);


if (VAR3->VAR10)
return;


if (VAR3->VAR11)
return;

FUN4(&VAR7);
}
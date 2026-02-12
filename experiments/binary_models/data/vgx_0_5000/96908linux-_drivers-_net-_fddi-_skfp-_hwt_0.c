



void hwt_start(struct s_smc *smc, u_long time)
{
u_short	cnt ;

if (time > HWT_MAX)
time = HWT_MAX ;

smc->hw.t_start = time ;
smc->hw.t_stop = 0L ;

cnt = (u_short)time ;

if (!cnt)
cnt++ ;

outpd(ADDR(B2_TI_INI), (u_long) cnt * 200) ;	
outpw(ADDR(B2_TI_CRTL), TIM_START) ;		

smc->hw.timer_activ = TRUE ;
}
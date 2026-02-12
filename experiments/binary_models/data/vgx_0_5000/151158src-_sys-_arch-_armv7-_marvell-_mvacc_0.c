uint32_t
mvacc_get_frequency(void *cookie, uint32_t *cells)
{
struct mvacc_softc *sc = cookie;
uint32_t sar, cpu, tclk;

sar = HREAD4(sc, SAR);
cpu = (sar >> SAR_CPU_DDR_FREQ_OPT) & SAR_CPU_DDR_FREQ_OPT_MASK;
tclk = (sar >> SAR_TCLK_FREQ_OPT) & SAR_TCLK_FREQ_OPT_MASK;

if (cpu > nitems(mvacc_cpu_freqs)) {
printf("%s: invalid cpu frequency", sc->sc_dev.dv_xname);
return 0;
}

switch (cells[0])
{
case 0: 
return tclk ? 200000000 : 250000000;
case 1: 
return mvacc_cpu_freqs[cpu];
case 2: 
return (mvacc_cpu_freqs[cpu] * mvacc_l2clk_ratios[cpu][0])
/ mvacc_l2clk_ratios[cpu][1];
case 3: 
return (mvacc_cpu_freqs[cpu] * mvacc_ddrclk_ratios[cpu][0])
/ mvacc_ddrclk_ratios[cpu][1];
default:
return 0;
}
}
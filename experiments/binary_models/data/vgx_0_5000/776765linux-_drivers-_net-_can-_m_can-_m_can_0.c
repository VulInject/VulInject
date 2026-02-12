static bool m_can_niso_supported(struct m_can_classdev *cdev)
{
u32 cccr_reg, cccr_poll = 0;
int niso_timeout = -ETIMEDOUT;
int i;

m_can_config_endisable(cdev, true);
cccr_reg = m_can_read(cdev, M_CAN_CCCR);
cccr_reg |= CCCR_NISO;
m_can_write(cdev, M_CAN_CCCR, cccr_reg);

for (i = 0; i <= 10; i++) {
cccr_poll = m_can_read(cdev, M_CAN_CCCR);
if (cccr_poll == cccr_reg) {
niso_timeout = 0;
break;
}

usleep_range(1, 5);
}


cccr_reg &= ~(CCCR_NISO);
m_can_write(cdev, M_CAN_CCCR, cccr_reg);

m_can_config_endisable(cdev, false);


return !niso_timeout;
}
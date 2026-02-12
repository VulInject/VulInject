STP_port_init (PORT_T* this, STPM_T* stpm, Bool check_link)
{
if (check_link) {
this->adminEnable = STP_OUT_get_port_link_status (this->port_index);
STP_VECT_create (&this->designPrio,
&stpm->BrId,
0,
&stpm->BrId,
this->port_id,
this->port_id);
STP_copy_times (&this->designTimes, &stpm->rootTimes);
}


this->fdWhile =
this->helloWhen =
this->mdelayWhile =
this->rbWhile =
this->rcvdInfoWhile =
this->rrWhile =
this->tcWhile =
this->txCount = 0;

this->msgPortRole = RSTP_PORT_ROLE_UNKN;
this->selectedRole = DisabledPort;
this->sendRSTP = True;
this->operSpeed = STP_OUT_get_port_oper_speed (this->port_index);
this->p2p_recompute = True;
}
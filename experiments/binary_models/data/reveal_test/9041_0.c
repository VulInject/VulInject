static int peerflag_bits ( peer_node * pn ) {
 int peerflags ;
 attr_val * option ;
 peerflags = 0 ;
 option = HEAD_PFIFO ( pn -> peerflags ) ;
 for ( ;
 option != NULL ;
 option = option -> link ) {
 switch ( option -> value . i ) {
 default : NTP_INSIST ( 0 ) ;
 break ;
 case T_Autokey : peerflags |= FLAG_SKEY ;
 break ;
 case T_Burst : peerflags |= FLAG_BURST ;
 break ;
 case T_Iburst : peerflags |= FLAG_IBURST ;
 break ;
 case T_Noselect : peerflags |= FLAG_NOSELECT ;
 break ;
 case T_Preempt : peerflags |= FLAG_PREEMPT ;
 break ;
 case T_Prefer : peerflags |= FLAG_PREFER ;
 break ;
 case T_True : peerflags |= FLAG_TRUE ;
 break ;
 case T_Xleave : peerflags |= FLAG_XLEAVE ;
 break ;
 }
 }
 return peerflags ;
 }
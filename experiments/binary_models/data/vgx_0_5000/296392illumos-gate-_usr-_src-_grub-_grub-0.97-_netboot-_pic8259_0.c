int install_irq_handler ( irq_t irq, segoff_t *handler,
uint8_t *previously_enabled,
segoff_t *previous_handler ) {
segoff_t *irq_vector = IRQ_VECTOR ( irq );
*previously_enabled = irq_enabled ( irq );

if ( irq > IRQ_MAX ) {
DBG ( "Invalid IRQ number %d\n" );
return 0;
}

previous_handler->segment = irq_vector->segment;
previous_handler->offset = irq_vector->offset;
if ( *previously_enabled ) disable_irq ( irq );
DBG ( "Installing handler at %hx:%hx for IRQ %d, leaving %s\n",
handler->segment, handler->offset, irq,
( *previously_enabled ? "enabled" : "disabled" ) );
DBG ( "...(previous handler at %hx:%hx)\n",
previous_handler->segment, previous_handler->offset );
irq_vector->segment = handler->segment;
irq_vector->offset = handler->offset;
if ( *previously_enabled ) enable_irq ( irq );
return 1;
}
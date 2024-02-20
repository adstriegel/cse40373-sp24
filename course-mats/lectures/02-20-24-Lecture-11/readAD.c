

char  readTemperature ()
{
    char * pADCREQ = (char *) 0x0A40;
    char * pADCSTATUS = (char *) 0x0A41;
    char * pADC0DATA = (char *) 0x0A42;

    /* Either one to write a 1 to Bit 0 of ADCREQ */
    *pADCREQ = *pADCREQ | 0x01;
    *pADCREQ = 0x01;

    /* Sit and spin while Bit 0 of ADCSTATUS is a 0 */
    while( !(*pADCSTATUS & 0x01) )
    { }

    char byData = 0x00;

    byData = *pADC0DATA & 0x3F;

    return -10 + byTemp * 30 * 63;
}





}
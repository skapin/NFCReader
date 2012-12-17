

/**
   Header: This is a single byte that indicates the beginning of a frame. This byte should
   be always 0xFF
   Reserved: This byte is reserved for future use and not implemented currently. It has to
   be always 0x00
   Length: This byte is used to indicate the length of the payload data. This includes the
   Command and the Data bytes
   Command: This byte is used to instruct the module on what operation to perform
   Data: These are parameters necessary for the module to execute the command. For
   example, for a Read command, the data will be the block number to be read. For a
   Write command, this will be the block number and 16 bytes of data.
   CSUM: This is the checksum byte. This byte is used on the host as well as the module to
   check the validity of the packet and to trap any data corruption. This is calculated by
   adding all the bytes in the packet except the Header byte
*/

/**
 * Calculate CSUM of a given frame, by adding al Bytes together.
 * The return value is 1 Byte long.
 *
 **/
char calculate_csum( char* frame, size_t size)
{
  int i = 0;
  char csum = 0;
  for( i; i < size ; ++i)
    {
      csum+=frame[i];
    }  
  return csum;
}

void send_command( command com, char* datas, size_t data_size)
{
  if ( data == NULL )
    data = "";
  
  char frame[32]="";
  char body[30]="";
  int frame_size = data_size+sizeof(com) ;
  
  sprintf( body, "%d%d%d%s", RFID_RESERVED_SM130, frame_size, (char)com, data );  
  sprintf( trame, "%d%s%d",RFID_HEADER_SM130, body, calculate_csum( body, frame_size+1+1 ) );
  
}

void read_frame()
{
  char frame[32];
  sscan( frame, "%*c%*c%c%d%d%d", RFID_HEADER_SM130, RFID_RESERVED_SM130, frame_size, com, data, csum );

}


int get_firmware_version()
{
  send_command( FIRMWARE, "", 0 );
}

void reset_software()
{
  send_command( RESET, "", 0 );
}

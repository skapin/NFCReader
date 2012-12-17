/**
 * @file protocol.h
 *
 * NFC protocol for RFID Module - SM130 Mifare (13.56 MHz)
 *
 * The communication between the host and the module can take place at 9600bps,
 * 19200bps, 38400bps, 57600bps or 115200bps N, 8, 1. Module communicates at
 * 19200bps,N,8,1 as default. Once the baud rate is changed using the Change baud
 * rate command, successful communication will only occur with the new baud rate.
 * The host first sends the command and the module executes the operation and replies
 * with a response to the command. The host can analyze the reply to check if the
 * operation was successful or if any error occurred during the operation.
 *
 **/

#define RFID_HEADER_SM130 0xFF
#define RFID_RESERVED_SM130 0x00

enum command
  {
    RESET = 0X80,
    FIRMWARE = 0X81,
    SEEK_FOR_TAG = 0X82,
    SELECT_TAG = 0X83,
    NA = 0X84,
    AUTHENTICATE = 0X85,
    READ_BLOCK =  0X86,
    READ_VALUE = 0X87,
    NA = 0X88,
    WRITE_BLOCK = 0X89,
    WRITE_VALUE = 0X8A,
    WRITE_4_BYTE_BLOC = 0X8B,
    WRITE_KEY = 0X8C,
    INCREMENT = 0X8D,
    DECREMENT = 0X8E,
    NA = 0X8F,
    ANTENNA_POWER = 0X90,
    READ_PORT = 0X91,
    WRITE_PORT = 0X92,
    HALT = 0X93,
    SET_BAUD_RATE = 0X94,
    NA_X95 = 0X95,
    SLEEP = 0X96
  };

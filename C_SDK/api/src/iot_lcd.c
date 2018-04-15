#include "iot_lcd.h"


/**д�� lcd����
*@param		:	����
*@return	:
**/
VOID iot_lcd_write_cmd(                          
                        UINT8 cmd 
                   )
{
    return  IVTBL(send_color_lcd_command)(cmd);
}

/**lcd д��lcd���� 
*@param	 	:	����
*@return	:
**/
VOID iot_lcd_write_data(                               
                        UINT8 data                
                )
{
    return IVTBL(send_color_lcd_data)(data);
}

/**lcd��ʼ��
*@param		:lcd��ʼ������
*@return	TRUE: 	    �ɹ�
*           FALSE:      ʧ��
**/	
BOOL iot_lcd_color_init(T_AMOPENAT_COLOR_LCD_PARAM *param )
{
    return IVTBL(init_color_lcd)(  param );
}

/**  ˢ��lcd
*@param		:������ʼ������
*@param		:ˢ�µĻ�����
*@return	TRUE: 	    �ɹ�
*           FALSE:      ʧ��
**/
VOID iot_lcd_update_color_screen(
				T_AMOPENAT_LCD_RECT_T* rect,        
				UINT16 *pDisplayBuffer    )
{
    return IVTBL(update_color_lcd_screen)(                       
                            rect,      
                            pDisplayBuffer       
                                   );
}
/** ����jpg��ʽͼƬ
*@param		:�ļ�·�������ļ���
*@param		:�ļ���ʽ
*@return	:����״̬��
**/
INT32 iot_decode_jpeg(
                    CONST char * filename,
                    T_AMOPENAT_IMAGE_INFO *imageinfo
                    )
{
    return IVTBL(imgs_decode_jpeg)(filename,imageinfo);
}

/** �ͷ�jpg��ʽ��������
*@param		:������ʾbuffer
*@return	:�ͷ�״̬��
**/
INT32 iot_free_jpeg_decodedata(
                    INT16* buffer
                    )
{
    return IVTBL(imgs_free_jpeg_decodedata)(buffer);
}
    

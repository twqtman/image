#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>

class Image{
public:
	int m_width;               //影像寬度
	int m_height;              //影像高度
	int m_channels;            //通道數，Gray=1 RGB=3
	int m_depth;               //像素位元深度，值為8或16
	unsigned char* m_data;     //每個像素的值

	Image(){;}
	Image(const Image &img);
	~Image();
};

#endif

/*Doxygen�̎g�������ꏏ�ɕ׋�
*�t�@�C�����ւ̃R�����g
* 
/**
* @file �t�@�C����
* @brief �ȒP�Ȑ���
* @author �쐬��
* @date �쐬��
* @detail �ڍׂȐ���
*/

/**
* @file    main.cpp
* @brief   �G���g���|�C���g��WINAPI�̏�����
* @author  Ryuga Sakakibara
* @date    2021/09/15
* @details none
*/
#include <Windows.h>

/**
* �֐��ւ̃R�����g
* @fn void function(int a, int b)
* @brief �ȒP�Ȑ����i�`����֐��j
* @param[in] a(������) �����̐���
* @param[out] b(������) �����̐���
* @return bool �߂�l�̐���
* @details �ڍׂȐ���
*/

/**
* @fn int WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
* @brief WinAPI�̃G���g���|�C���g
* @param[in] �C���X�^���X�n���h��(���������ʂ��鐔�l)
* @param[in] Win16�̎Y��(��{NULL)
* @param[in] LPSTR(���C���A�v���P�[�V�����E�B���h�E���ŏ��E�ő剻�A�܂���
*				   ����ɕ\������邩�������t���O)
* @param[in] �A�v���P�[�V�����̏����\�����@
* @return �A�v���P�[�V�����̏I���R�[�h�@�ʏ�0
*/
int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	/**
	* @fn MessageBox(HWND hWnd,LPCTSTR lpText,LPCTSTR lpCaption,UINT uType)
	* @brief ���b�Z�[�W�{�b�N�X��\������֐�(?)
	* @param[in] �e�E�B���h�E�̎w��
	* @param[in] ���b�Z�[�W�{�b�N�X�ɕ\�����镶����
	* @param[in] ���b�Z�[�W�{�b�N�X�̃t���[���ɕ\�������^�C�g��
	* @param[in] ���b�Z�[�W�{�b�N�X�̌`�Ԃ�\���萔
	* @return	 �����ꂽ�{�^���̃t���O
	*/
	MessageBox(NULL,
			   TEXT("HelloWorld"),
			   TEXT("���E�ֈ��A"), 
			   MB_OK|
			   MB_ICONINFORMATION);

	return 0;
}
#include <Windows.h>

//	���Ăяo���K��(Calling Convention)�ƌĂ΂�Ă���B�֐��̌Ăяo��������\��
int WINAPI WinMain(
	HINSTANCE hInstance,		//	���݂̃C���X�^���X�ւ̃n���h��
	HINSTANCE hPrevInstance,	//	�ȑO�̃C���X�^���X�ւ̃n���h��
	LPSTR lpCmdLine,			//	�R�}���h���C������
	int nCmdShow)				//	�\����Ԃ̃I�v�V����
{
	/**
	*	WinMain			Windows�v���O�����̃G���g���|�C���g
	*	hInstance		���݂̃A�v���P�[�V��������ӂɎ������ʒl������
	*	hPrevInstance	Win16����ٕ̈��炵���BWin32�ł͏��NULL������
	*	lpCmdLine		�R�}���h���C������������B�R�}���h���C���������ĂȂ񂼁H
	*	nCmdShow		�E�B���h�E�̕\����Ԃ�\���l�����遨���Ƃ̃E�B���h�E�̍쐬�ŏڂ���
	*	return			WM_QUIT���b�Z�[�W��wParam�l���w�肷�遨���Ƃ̃E�B���h�E�v���V�[�W���ŏڂ���
	*/

	/**
	*	MessageBox		���b�Z�[�W�{�b�N�X��\������֐�
	*	hWnd			�I�[�i�[�E�B���h�E�Ƃ���E�B���h�E���w�肷��
	*					�����NULL��ݒ�B�I�[�i�[�E�B���h�E�������Ȃ����b�Z�[�W�{�b�N�X���쐬
	*	LPCTSTR			���b�Z�[�W�{�b�N�X�̃e�L�X�g
	*	LPCTSTR			���b�Z�[�W�{�b�N�X�̃L���v�V����
	*	UType			���b�Z�[�W�{�b�N�X�̃^�C�v��\�������l
	*					�����ł�winuser.h�Œ�`����Ă���l���g�p���邱�Ƃ��ł���
	*	
	*/
	MessageBox(NULL,
			   TEXT("HelloWorld"),
			   TEXT("���E�ֈ��A"), 
			   MB_OK|
			   MB_ICONINFORMATION);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int T, h, w, n;  //�մԼ�, ȣ����, �� ���Ǽ�, n��° ������ �մ�
	int maxh = 0, maxw = 0;
	//
	scanf("%d", &T);
	for (int i = 0; i < T; i++) 
	{
		scanf("%d %d %d", &h, &w, &n);
		
		maxh = h; //�ִ���
		maxw = w; //�ִ� ȣ��

		w = 1;	//���� 1�� �����ϰ� ����
		h = 1;	//���� 1�� �����ϰ� ����
		
		for (int j = 1; j < n; j++)
		{
			if (n <= maxh*maxw) //�������� �� ���� ������
			{
				if (h != maxh)	//���� �ְ��� ���� ������
					h++;		//ȣ���� ���� �ʰ� ���� ��
				else			//���� �ְ������� ����������
					w++, h = 1;	//ȣ���� �ø��� ���� �ٽ� 1������
			}

			else //���� �������� �溸�� ���ٸ�.
			{
				fprintf(stderr, "Error! �մ��� �溸�� �����ϴ�\n");
				break;
			}	
			
		}
		printf("%d%02d", h, w);
	}



	return 0;
}
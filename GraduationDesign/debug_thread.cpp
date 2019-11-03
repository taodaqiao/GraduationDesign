#include "debug_thread.h"



extern "C" {
	namespace Driver {
		namespace thread_list {
			p_break_point  break_point_head;



			void init_thread_list() {
				break_point_head = reinterpret_cast<p_break_point>(ExAllocatePool(NonPagedPool, sizeof(break_point)));
				break_point_head->next = nullptr;
				break_point_head->tid = 0ul;
			}



			void insert_thread_list(UINT32 tid) {
				//ͷ�巨
				p_break_point p_temp = break_point_head->next;
				p_break_point new_node  = reinterpret_cast<p_break_point>(ExAllocatePool(NonPagedPool, sizeof(break_point)));
				new_node->tid = tid;
				break_point_head->next = new_node;
				new_node->next = p_temp;
			}


			void delete_thread_list(UINT32 tid) {
				p_break_point p_temp = break_point_head;
				p_break_point pre_node =nullptr;
				while (p_temp->next) {
					//���浱ǰ�ڵ�
					pre_node = p_temp;
					p_temp = p_temp->next;
					//��ͷ������
					if (p_temp->tid == tid) {
						//��ʼɾ�����ͷ�
						pre_node->next = p_temp->next;
						p_temp->next = nullptr;
						ExFreePool(p_temp);
					}
				}
			}


			bool find_thread_list(UINT32 tid) {
				p_break_point p_temp = break_point_head;
				while (p_temp->next) {
					p_temp = p_temp->next;
					if (p_temp->tid == tid) {
						return true;
					}
				}
				return false;
			}
		}
	}
}
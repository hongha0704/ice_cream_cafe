🍦 ARIS/STORAGE Project
===
AI 비전과 다중로봇 제어를 활용한 아이스크림 제조 및 서빙 자동화
---

### 🔨 개발환경
본 프로젝트는 Ubuntu 22.04 (ROS2 humble) 환경에서 개발되었습니다.   
&nbsp;

### 🦾 작업공간
<img src="image/cup_serving_1.jpg" width="50%" height="50%" title="px(픽셀) 크기 설정" alt="project_management"></img>   
&nbsp;

### 💻 코드 실행

#### **robot motion**
code: [motion3.py](aris_pkg/aris_pkg/motion3.py)
```bash
ros2 run aris_pkg motion3
```
&nbsp;

### 📷 시연 영상
https://youtu.be/z3UYvFTg2U8

---
&nbsp;

## 1. 📘 프로젝트 개요
아이스크림 매장에서 매니퓰레이터를 활용한 아이스크림 제조와 자율주행로봇을 활용한 서빙을 자동화하는 프로젝트입니다.   

&nbsp;

## 2. 👥 프로젝트 팀 구성 및 역할분담
| 이름 | 역할 |
|------|------|
| 임용진(팀장) | 프로젝트 계획 수립 |
| 박정한 | GUI 소프트웨어 구현, DATABASE 구현, 로봇팔 동작 구현, ROS2 통신 노드 구성 |
| 이재혁 | 경로주행 노드 구현, ROS2 통신 시스템 구축 및 통합, 전체 시스템 통합, Storagy 주행제어, 얼굴인식 개발 |
| 백홍하 | 로봇팔(ARIS) 동작 구현, YOLO 객체인식(캡슐, 로봇암, 사람 등) 구현, 객체 좌표 변환 |
| 이성민 | GUI 소프트웨어 구현, Storagy 주행제어, 로봇암 좌표 변환 구현 |
| 이혁진 | Storagy 주행제어, 프로젝트 산출물 자료 정리, 얼굴인식 개발 |

&nbsp;

## 3. 🗓 프로젝트 구현 일정
**진행 일자: 24.07.01(월) ~ 24.08.29(목) (58일)**
<img src="image/250717_프로젝트 수행일정.png" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="project_management"></img>

&nbsp;

## 4. 📌 SKILLS
<img src="image/250717_Skills.png" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="project_management"></img>   

&nbsp;

## 5. ⚒️ System Architecture
<img src="https://github.com/user-attachments/assets/29244f93-ce0d-49af-ace1-c578e8ecdbf7" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="system_flow"></img>

&nbsp;

## 6. 🛠️ Node Architecture
<img src="https://github.com/user-attachments/assets/cd8f4409-d660-482d-b8d1-5f7763afaa6c" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="system_flow"></img>

&nbsp;

## 7. 🎬 System Flow
<img src="https://github.com/user-attachments/assets/8bbb32ba-580e-48f6-9579-3763697eb3b8" width="50%" height="50%" title="px(픽셀) 크기 설정" alt="system_flow"></img>

&nbsp;

- **프로젝트 시나리오**   
<img src="rokey_pjt_turtle4/rokey_pjt/image/250717_system_flow_detail_1.png" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="system_flow"></img>
<img src="rokey_pjt_turtle4/rokey_pjt/image/250717_system_flow_detail_2.png" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="system_flow"></img>
<img src="rokey_pjt_turtle4/rokey_pjt/image/250717_system_flow_detail_3.png" width="75%" height="75%" title="px(픽셀) 크기 설정" alt="system_flow"></img>

&nbsp;



## 8. 🔍 프로젝트 기대효과

### **기대 효과**
- 자율주행 로봇 + 네트워크 자원 최적화 통해 안정적 시스템 구현
- 클라우드 기반 구조로 병원 규모 확장 시에도 유연하게 대응 가능
- 반복 업무 자동화로 간호사는 전문 업무에 집중 가능

&nbsp;

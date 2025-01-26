#include<iostream>
using namespace std;

struct doctor {
    int id;
    string name;
    string speciality;
};

struct patient {
    int patientid;
    string pname;
    string contactinfo;
};

struct appointment {
    doctor doctor;
    patient patient;
    string appointment;
};

// Function to input doctor details
doctor inputdoctor() {
    doctor doc;
    cout << "DOCTOR'S DETAILS:\n";
    cout << "Enter the doctor's id: ";
    cin >> doc.id;
    cout << "Enter the doctor's name: ";
    cin >> doc.name;
    cout << "Enter the doctor's speciality: ";
    cin >> doc.speciality;
    return doc;
}

// Function to input patient details
patient inputpatient() {
    patient pat;
    cout << "PATIENT DETAILS:\n";
    cout << "Enter the patient's id: ";
    cin >> pat.patientid;
    cout << "Enter the patient's name: ";
    cin >> pat.pname;
    cout << "Enter the patient's contact info: ";
    cin >> pat.contactinfo;
    return pat;
}

// Function to input appointment details
appointment inputappointment() {
    appointment app;
    cout << "Enter doctor details:\n";
    app.doctor = inputdoctor();
    cout << "Enter patient details:\n";
    app.patient = inputpatient();
    cout << "Enter the appointment time: ";
    cin >> app.appointment;
    return app;
}

// Function to display complete appointment details
void displaycomplete(appointment app) {
    cout << "\nAppointment Details:\n";
    cout << "Doctor Name: " << app.doctor.name << endl;
    cout << "Doctor Specialty: " << app.doctor.speciality << endl;
    cout << "Patient Name: " << app.patient.pname << endl;
    cout << "Patient Contact Info: " << app.patient.contactinfo << endl;
    cout << "Appointment Time: " << app.appointment << endl;
}

// Function to display limited appointment details
void displayless(appointment app) {
    cout << "\nLimited Appointment Details:\n";
    cout << "Doctor Specialty: " << app.doctor.speciality << endl;
    cout << "Patient Contact Info: " << app.patient.contactinfo << endl;
}

int main() {
    appointment app = inputappointment();  // Input appointment details
    int choice;
    
    cout << "\nChoose an option:\n1. Display Complete Details\n2. Display Limited Details\n";
    cin >> choice;

    switch (choice) {
        case 1:
            displaycomplete(app);
            break;  // Don't forget the break!
        case 2:
            displayless(app);
            break;  // Don't forget the break!
        default:
            cout << "Invalid choice, please try again.\n";
    }

    return 0;
}

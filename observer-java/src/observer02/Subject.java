package observer02;

/**
 * @author agj017@gmail.com
 * @since 2022/03/29
 */
public interface Subject {

    void registerObserver(Observer observer);

    void removeObserver(Observer observer);

    void notifyObservers();
}
